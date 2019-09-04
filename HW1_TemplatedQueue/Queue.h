/// 
/// IGME-309.02 - Data Structures and Algorithms
/// 
/// Homework 1          :  Templated Queue
/// 
/// Class Description   : Is the actual queue, manages data and nodes
/// Created By          : Benjamin Kleynhans - bxk8027@rit.edu
/// Date Created        : September 2, 2019
/// Last Modified By    : Benjamin Kleynhans
/// Date Modified       : September 2, 2019
/// Filename            : Queue.h
///

#include "pch.h"
#pragma once
#include "QueueNode.h"
#include <iostream>
#include <list>
#include <string>

template <class T>
class Queue
{
public:

	Queue();
	Queue(Queue<T> &queue);
	//Queue<T>& operator=(const Queue<T> &queue);	

    T Peek();
	void Push(T);
	T Pop();
	void Print();
	void Print(std::string);
    void SetHead(QueueNode<T>*);	
    QueueNode<T>* GetHead();
    void SetTail(QueueNode<T>*);	
    QueueNode<T>* GetTail();
    int GetSize();
	bool IsEmpty();

	void ToggleDebugMode();
	bool GetDebugState();

    ~Queue();

private:

    QueueNode<T>* head;
    QueueNode<T>* tail;

	bool debugState = false;
	int size = 0;
};

// Default Constructor
template <class T>
Queue<T>::Queue()
{
	
}

// Copy Constructor
template <class T>
Queue<T>::Queue(Queue& queue)
{	
	QueueNode<T>* node = queue.GetTail();

	while (node->GetData() != NULL) {
		this->Push(node->GetData());

		node = node->GetNext();
	}
}

//// Copy Assignment operator
//template <class T>
//Queue<T>& Queue<T>::operator=(const Queue<T> &queue)
//{
//	Queue<T> temp(queue);
//	
//	std::swap(this->head, temp.head);
//	std::swap(this->tail, temp.tail);
//
//	return *this;
//}

// Getters and Setters
template <class T>
void Queue<T>::SetHead(QueueNode<T>* node)
{
    this->head = node;
}

template <class T>
QueueNode<T>* Queue<T>::GetHead()
{
    return this->head;
}

template <class T>
void Queue<T>::SetTail(QueueNode<T>* node)
{
    this->tail = node;
}

template <class T>
QueueNode<T>* Queue<T>::GetTail()
{
    return this->tail;
}

template <class T>
int Queue<T>::GetSize()
{
	return this->size;
}

// Test if queue is empty
template <class T>
bool Queue<T>::IsEmpty()
{
	if ((this->GetSize() == 0) || (this->GetSize() == NULL))
	{
		return true;
	}
	else
	{
		return false;
	}
}

// View the item on top of the queue
template <class T>
T Queue<T>::Peek()
{
	return this->GetHead();
}

// Add an element to the back of the queue
template <class T>
void Queue<T>::Push(T data)
{
	QueueNode<T>* pNewNode = new QueueNode<T>(data);

	if (this->GetHead() == nullptr)
	{
		this->SetHead(pNewNode);
		this->SetTail(pNewNode);		
	}
	else
	{
		QueueNode<T>* currentNode = this->GetTail();

		while ((currentNode->GetData() > pNewNode->GetData()) &&
			(currentNode != this->GetHead()))
		{
			if (currentNode->GetNext() != nullptr)
			{
				currentNode = currentNode->GetNext();
			}
			else
			{
				currentNode = this->GetHead();
			}
		}

		if (currentNode == this->GetTail())
		{
			pNewNode->SetPrevious(nullptr);
			pNewNode->SetNext(currentNode);
			currentNode->SetPrevious(pNewNode);
			this->SetTail(pNewNode);
		}
		else if (currentNode == this->GetHead())
		{
			if ((currentNode->GetData() < this->GetHead()->GetData()) ||
				(pNewNode->GetData() < currentNode->GetData()))
			{
				pNewNode->SetNext(nullptr);
				pNewNode->SetPrevious(currentNode);
				currentNode->SetNext(pNewNode);
				this->SetHead(pNewNode);
			}
			else
			{
				pNewNode->SetNext(this->GetHead());
				this->GetHead()->GetPrevious()->SetNext(pNewNode);
				pNewNode->SetPrevious(this->GetHead()->GetPrevious());
				this->GetHead()->SetPrevious(pNewNode);
			}
			
		}
		else
		{
			currentNode->GetPrevious()->SetNext(pNewNode);
			pNewNode->SetPrevious(currentNode->GetPrevious());
			currentNode->SetPrevious(pNewNode);
			pNewNode->SetNext(currentNode);
		}
	}

	this->size++;
}

// Remove an element from the back of the queue
template <class T>
T Queue<T>::Pop()
{
	if (this->GetSize() > 0)
	{
		T tempVal = this->GetTail()->GetData();
		this->SetTail(this->GetTail()->GetNext());

		if (this->GetTail() != nullptr)
		{
			delete(this->GetTail()->GetPrevious());
			this->GetTail()->SetPrevious(nullptr);
		}
		else
		{
			delete(this->GetHead());
		}

		this->size--;

		return tempVal;
	}
}

// Enables or disables debug mode which prints additional information to the terminal
template <class T>
void Queue<T>::ToggleDebugMode()
{
	this->debugState = !this->debugState;
}

// Get the current debug mode state
template <class T>
bool Queue<T>::GetDebugState()
{
	return this->debugState;
}

// Print all the data in the queue providing a title
template <class T>
void Queue<T>::Print(std::string title)
{
	int counter = 0;
		
	std::cout << title;

	QueueNode<T>* currentNode = this->GetHead();
	
	while (currentNode->GetData() != NULL)
	{
		std::cout << "    " << currentNode->GetData();

		currentNode = currentNode->GetPrevious();
		counter++;
	}

	std::cout << std::endl;
}

// Print all the data in the queue, not providing a title
template <class T>
void Queue<T>::Print()
{
	int counter = 0;

	if (this->GetDebugState())
	{
		std::cout << "--> Printing all the nodes in the queue <--" << std::endl;
		std::cout << "    Top of queue is on the left" << std::endl << std::endl;
	}	

	QueueNode<T> currentNode = this->GetHead();

	while (currentNode->GetData() != NULL)
	{
		std::cout << "    " << currentNode->GetData();

		currentNode = currentNode.GetNext();
		counter++;
	}

	if (this->GetDebugState())
	{
		std::cout << std::endl << std::endl;
		std::cout << "--> All nodes printed <--" << std::endl << std::endl;
	}
}

// Destroy the queue on exit
template <class T>
Queue<T>::~Queue()
{

}