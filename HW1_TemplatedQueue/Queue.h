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
	Queue(const Queue &queue);
	Queue<T>& operator=(const Queue<T> &queue);

    void Push(T);
    T Peek();
    T Pop();
	void Enqueue(T);
	T DequeueBack();
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
		
    //std::list<QueueNode<T>*> queueList;	
    QueueNode<T>* head;
    QueueNode<T>* tail;

	bool debugState = false;	
};

// Default Constructor
template <class T>
Queue<T>::Queue()
{
	
}

// Copy Constructor
template <class T>
Queue<T>::Queue(const Queue<T> &queue)
{
	QueueNode<T>* currentNode = this->GetHead;

	do
	{
		this->Push(currentNode->GetData());
		currentNode - currentNode->nextNode;

	} while currentNode->NextNode != nullptr;

	/*for (QueueNode<T>* node : queue.queueList)
	{		
		this->Push(node->GetData());
	}*/
}

// Copy Assignment operator
template <class T>
Queue<T>& Queue<T>::operator=(const Queue<T> &queue)
{
	Queue<T> temp(queue);
	
	this->queueList.assign(temp.queueList.begin(), temp.queueList.end());
	
	std::swap(this->head, temp.head);
	std::swap(this->tail, temp.tail);

	return *this;
}

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
    return this->queueList.size();
}

// Test if queue is empty
template <class T>
bool Queue<T>::IsEmpty()
{
	if (this->queueList.size() == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

// Add a new element to the front of the queue
template <class T>
void Queue<T>::Push(T data)
{
	QueueNode<T>* pNewNode = new QueueNode<T>(data);	
    
    if (this->queueList.size() == 0)
    {
		this->SetHead(pNewNode);
        this->SetTail(pNewNode);
        
		pNewNode->SetPrevious(nullptr);
		this->queueList.push_front(pNewNode);
    }
    else
    {
		typename std::list<QueueNode<T>*>::iterator currentIndex = this->queueList.begin();
		int counter = 0;

		for (QueueNode<T>* node : this->queueList)
		{			
			if (pNewNode->GetData() > node->GetData())
			{
				if (this->GetTail() == node)
				{
					pNewNode->SetPrevious(nullptr);
					pNewNode->SetNext(node);
					node->SetPrevious(pNewNode);
					this->SetTail(pNewNode);

					this->queueList.push_back(pNewNode);

					break;
				}
				else if (this->GetHead() == node)
				{
					node->SetNext(pNewNode);
					node->GetNext()->SetPrevious(node);
					this->SetHead(pNewNode);

					this->queueList.push_front(pNewNode);

					break;
				}
				else
				{
					node->GetPrevious()->SetNext(pNewNode);
					pNewNode->SetPrevious(node->GetPrevious());
					pNewNode->SetNext(node);
					node->SetPrevious(pNewNode);

					this->queueList.insert(currentIndex, pNewNode);
				
					break;
				}
			}

			currentIndex++;
			counter++;
		}
    }
}

// View the item on top of the queue
template <class T>
T Queue<T>::Peek()
{
	return this->GetHead();
}

// Pop the top element from the queue, returning its value
template <class T>
T Queue<T>::Pop()
{
	if (this->GetSize() > 0)
	{
		T tempVal = this->GetHead()->GetData();
		this->SetHead(this->GetHead()->GetPrevious());

		this->queueList.pop_front();

		if (this->GetHead() != nullptr)
		{
			delete(this->GetHead()->GetNext());
			this->GetHead()->SetNext(nullptr);
		}
		else
		{
			delete(this->GetTail());
		}

		return tempVal;
	}
}

// Add an element to the back of the queue
template <class T>
void Queue<T>::Enqueue(T data)
{
	QueueNode<T>* pNewNode = new QueueNode<T>(data);

	if (this->queueList.size() == 0)
	{
		this->SetHead(pNewNode);
		this->SetTail(pNewNode);

		pNewNode->SetPrevious(nullptr);
	}
	else
	{
		pNewNode->SetNext(this->GetTail());
		this->GetTail()->SetPrevious(pNewNode);
		this->SetTail(pNewNode);
		this->GetTail()->SetPrevious(nullptr);
	}

	this->queueList.push_back(pNewNode);
}

// Remove an element from the back of the queue
template <class T>
T Queue<T>::DequeueBack()
{
	if (this->GetSize() > 0)
	{
		T tempVal = this->GetTail()->GetData();
		this->SetTail(this->GetTail()->GetNext());

		this->queueList.pop_back();

		if (this->GetTail() != nullptr)
		{
			delete(this->GetTail()->GetPrevious());
			this->GetTail()->SetPrevious(nullptr);
		}
		else
		{
			delete(this->GetHead());
		}

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
	
	for (QueueNode<T>* node : this->queueList)
	{
		std::cout << "    " << node->GetData();

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

	for (QueueNode<T>* node : this->queueList)
	{
		std::cout << "    " << node->GetData();

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