/// 
/// IGME-309.02 - Data Structures and Algorithms
/// 
/// Homework 1          :  Templated Queue
/// 
/// Class Description   : Creates nodes for use with templated queue
/// Created By          : Benjamin Kleynhans - bxk8027@rit.edu
/// Date Created        : September 2, 2019
/// Last Modified By    : Benjamin Kleynhans
/// Date Modified       : September 2, 2019
/// Filename            : QueueNode.h
///

#include "pch.h"
#pragma once

template <class T>
class QueueNode
{
public:
    QueueNode(T);
	QueueNode(const QueueNode &node);
	QueueNode& operator=(const QueueNode &node);

    void SetNext(QueueNode*);	
    QueueNode* GetNext();
    void SetData(T);
    T GetData();
    void SetPrevious(QueueNode*);
    QueueNode* GetPrevious();

    ~QueueNode();

private:
    QueueNode* nextNode;	
    T data;
	QueueNode* previousNode;

	bool debug = false;
};

// Default Constructor
template <class T>
QueueNode<T>::QueueNode(T data)
{
    this->nextNode = nullptr;
    this->data = 0;
    this->previousNode = nullptr;
    this->SetData(data);
}

// Copy Constructor
template <class T>
QueueNode<T>::QueueNode(const QueueNode &node)
{
	this->SetNext(node->GetNext());
	this->SetData(node->GetData());
	this->SetPrevious(node->GetPrevious());
}

// Copy Assignment Operator
template <class T>
QueueNode<T>& QueueNode<T>::operator=(const QueueNode &node)
{
	QueueNode<T> temp(node);

	std::swap(this->nextNode, temp->nextNode);
	std::swap(this->data, temp->data);
	std::swap(this->previousNode, temp - previousNode);

	return *this;
}

// Getters and Setters
template <class T>
void QueueNode<T>::SetData(T data)
{
    this->data = data;
}

template <class T>
T QueueNode<T>::GetData()
{
    return this->data;
}

template <class T>
void QueueNode<T>::SetNext(QueueNode* pNode)
{
	if (this != nullptr)
	{
		this->nextNode = pNode;
	}    
}

template <class T>
QueueNode<T>* QueueNode<T>::GetNext()
{
	if (this != nullptr)
	{
		return this->nextNode;
	}
	else
	{
		return nullptr;
	}
}

template <class T>
void QueueNode<T>::SetPrevious(QueueNode* pNode)
{
	if (this != nullptr)
	{
		this->previousNode = pNode;
	}
}

template <class T>
QueueNode<T>* QueueNode<T>::GetPrevious()
{
	if (this != nullptr)
	{
		return this->previousNode;
	}
	else
	{
		return nullptr;
	}    
}

// Destructor
template <class T>
QueueNode<T>::~QueueNode()
{
	if (this->debug)
	{
		std::cout << std::endl << "Freeing memory for node : " << this->GetData() << std::endl;
	}
}