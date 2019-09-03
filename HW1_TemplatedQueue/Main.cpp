/// 
/// IGME-309.02 - Data Structures and Algorithms
/// 
/// Homework 1          :  Templated Queue
/// 
/// Class Description   : Driver program for the templated queue
/// Created By          : Benjamin Kleynhans - bxk8027@rit.edu
/// Date Created        : September 2, 2019
/// Last Modified By    : Benjamin Kleynhans
/// Date Modified       : September 2, 2019
/// Filename            : Main.cpp
///

#include "pch.h"
#include <iostream>
#include "Queue.h"
#include "QueueNode.h"

namespace TemplatedQueue
{
	// Int data types
	// ********************************************************
	// Odd variables
	int intOdd[10] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19 };

	// Even variables
	int intEven[10] = { 2, 4, 6, 8, 10, 12, 14, 16, 18, 20 };

	// Big numbers after copy testQueue 1
	int intBigNumQueue1[5] = { 90, 91, 92, 93, 94 };

	// Big numbers after copy testQueue 2
	int intBigNumQueue2[5] = { 995, 996, 997, 998, 999 };

	// Float data types
	// ********************************************************
	// Odd variables
	float floatOdd[10] = { 1.1f, 3.3f, 5.5f, 7.7f, 9.9f, 11.11f, 13.13f, 15.15f, 17.17f, 19.19f };

	// Even variables
	float floatEven[10] = { 2.2f, 4.4f, 6.6f, 8.8f, 10.1f, 12.12f, 14.14f, 16.16f, 18.18f, 20.2f };

	// Big numbers after copy testQueue 1
	float floatBigNumQueue1[5] = { 90.9f, 91.91f, 92.92f, 93.93f, 94.94f };

	// Big numbers after copy testQueue 2
	float floatBigNumQueue2[5] = { 995.995f, 996.996f, 997.997f, 998.998f, 999.999f };

	// Char data types
	// ********************************************************
	// Odd variables
	char charLowerA[10] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j' };

	// Even variables
	char charUpperA[10] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J' };

	// Big numbers after copy testQueue 1
	char charLowerQueue1Z[5] = { 'z', 'y', 'x', 'w', 'v' };

	// Big numbers after copy testQueue 2
	char charUpperQueue2Z[5] = { 'Z', 'Y', 'X', 'W', 'V' };

	// Double data types
	// ********************************************************
	// Odd variables
	double doubleOdd[10] = { 1.01, 3.03, 5.05, 7.07, 9.09, 11.011, 13.013, 15.015, 17.017, 19.019 };

	// Even variables
	double doubleEven[10] = { 2.02, 4.04, 6.06, 8.08, 10.010, 12.012, 14.014, 16.016, 18.018, 20.020 };

	// Big numbers after copy testQueue 1
	double doubleBigNumQueue1[5] = { 90.090, 91.091, 92.092, 93.093, 94.094 };

	// Big numbers after copy testQueue 2
	double doubleBigNumQueue2[5] = { 995.0995, 996.0996, 997.0997, 998.0998, 999.0999 };
};

int main()
{
	TestInts();
	TestFloats();
	TestChars();
	TestDoubles();
}

void TestInts()
{
	//**************************************************
	//                    QUEUE 1
	//**************************************************
	// Creating the first test queue with INT data type
	Queue<int> testQueue1;

	// Pushing 5 numbers into the queue
	std::cout << "Pushing numbers onto the testQueue1" << std::endl << std::endl;

	std::cout << "    --> pushing : ";
	for (int i = 0; i < 5; i++)
	{
		std::cout << TemplatedQueue::intOdd[i] << " ";
		testQueue1.Push(TemplatedQueue::intOdd[i]);
	}

	std::cout << std::endl << std::endl;

	// Printing the current queue
	std::cout << "Finished pushing onto testQueue1" << std::endl;
	std::cout << "Printing testQueue1" << std::endl << std::endl;

	testQueue1.Print("testQueue1 :");
	std::cout << std::endl;

	// Enqueueing 5 numbers onto the queue
	std::cout << "Enqueueing number into testQueue1" << std::endl << std::endl;

	std::cout << "    --> enqueueing : ";
	for (int i = 0; i < 5; i++)
	{
		std::cout << TemplatedQueue::intEven[i] << " ";
		testQueue1.Enqueue(TemplatedQueue::intEven[i]);
	}

	std::cout << std::endl << std::endl;

	// Printing the current queue
	std::cout << "Finished enqueueing onto testQueue1" << std::endl;
	std::cout << "Printing testQueue1" << std::endl << std::endl;

	testQueue1.Print("testQueue1 :");
	std::cout << std::endl;

	//**************************************************
	//                    QUEUE 2
	//**************************************************

	// Creating a copy of testQueue1 named testQueue2 using copy constructor
	std::cout << "Creating a copy of testQueue1" << std::endl << std::endl;

	Queue<int> testQueue2 = testQueue1;

	// Pushing 5 big numbers into testQueue1
	std::cout << "Pushing 5 big numbers into testQueue1" << std::endl << std::endl;

	std::cout << "    --> pushing : ";
	for (int i = 0; i < 5; i++)
	{
		std::cout << TemplatedQueue::intBigNumQueue1[i] << " ";
		testQueue1.Push(TemplatedQueue::intBigNumQueue1[i]);
	}

	std::cout << std::endl << std::endl;

	std::cout << "Finished pushing onto testQueue1" << std::endl;
	std::cout << "Printing testQueue1" << std::endl << std::endl;

	// Printing testQueue1
	testQueue1.Print("testQueue1 :");
	std::cout << std::endl;

	// Enqueueing 5 big numbers onto testQueue1
	std::cout << "Enqueueing 5 big numbers onto testQueue2" << std::endl << std::endl;

	std::cout << "    --> enqueueing : ";
	for (int i = 0; i < 5; i++)
	{
		std::cout << TemplatedQueue::intBigNumQueue2[i] << " ";
		testQueue2.Enqueue(TemplatedQueue::intBigNumQueue2[i]);
	}

	std::cout << std::endl << std::endl;

	std::cout << "Finished enqueueing onto testQueue2" << std::endl;
	std::cout << "Printing testQueue2" << std::endl << std::endl;

	// Printing testQueue2
	testQueue2.Print("testQueue2 :");
	std::cout << std::endl;

	// ****** PLEASE NOTE ******
	// I'm dequeueing the one queue and popping the other queue, so the values should have the same order
	// in the output even though the last 5 numbers will be different.


	//**************************************************
	//                  QUEUE 3 AND 4
	//**************************************************

	// Using copy assignment constructor to make copies of test queues
	Queue<int> testQueue3;
	testQueue3 = testQueue1;

	Queue<int> testQueue4;
	testQueue4 = testQueue2;

	// Enqueueing 5 even values onto testQueue3
	std::cout << "Enqueueing numbers into the testQueue3" << std::endl << std::endl;

	std::cout << "    --> enqueueing : ";
	for (int i = (sizeof(TemplatedQueue::intEven) / sizeof(int)); i > 5; i--)
	{
		std::cout << TemplatedQueue::intEven[i - 1] << " ";
		testQueue3.Enqueue(TemplatedQueue::intEven[i - 1]);
	}

	std::cout << std::endl << std::endl;

	// Printing the current queue
	std::cout << "Finished enqueueing into testQueue3" << std::endl;
	std::cout << "Printing testQueue3" << std::endl << std::endl;

	testQueue3.Print("testQueue3 :");
	std::cout << std::endl;

	// Pushing 5 odd values onto testQueue4
	std::cout << "Pushing numbers onto the testQueue4" << std::endl << std::endl;

	std::cout << "    --> pushing : ";
	for (int i = (sizeof(TemplatedQueue::intOdd) / sizeof(int)); i > 5; i--)
	{
		std::cout << TemplatedQueue::intOdd[i - 1] << " ";
		testQueue4.Push(TemplatedQueue::intOdd[i - 1]);
	}

	std::cout << std::endl << std::endl;

	// Printing the current queue
	std::cout << "Finished pushing onto testQueue4" << std::endl;
	std::cout << "Printing testQueue4" << std::endl << std::endl;

	testQueue4.Print("testQueue4 :");
	std::cout << std::endl;

	// Printing Queues 1 through 4 to show they are all different
	std::cout << "Printing Queues 1 through 4 to show they are all different" << std::endl;
	std::cout << std::endl << std::endl;

	testQueue1.Print("testQueue1 :");
	testQueue2.Print("testQueue2 :");
	testQueue3.Print("testQueue3 :");
	testQueue4.Print("testQueue4 :");

	std::cout << std::endl;
	// Dequeueing everything from testQueue1
	std::cout << "Dequeueing everything from testQueue1" << std::endl << std::endl;

	std::cout << "    --> dequeueing : ";
	while (!testQueue1.IsEmpty())
	{
		std::cout << testQueue1.DequeueBack() << " ";
	}

	std::cout << std::endl << std::endl;

	std::cout << "testQueue1 is now empty" << std::endl << std::endl;

	// Popping everything from testQueue2
	std::cout << "Popping everything from testQueue 2" << std::endl << std::endl;

	std::cout << "    --> popping    : ";
	while (!testQueue2.IsEmpty())
	{
		std::cout << testQueue2.Pop() << " ";
	}

	std::cout << std::endl << std::endl;

	std::cout << "testQueue2 is now empty" << std::endl << std::endl;

	// Dequeueing everything from testQueue3
	std::cout << "Dequeueing everything from testQueue3" << std::endl << std::endl;

	std::cout << "    --> dequeueing : ";
	while (!testQueue3.IsEmpty())
	{
		std::cout << testQueue3.DequeueBack() << " ";
	}

	std::cout << std::endl << std::endl;

	std::cout << "testQueue3 is now empty" << std::endl << std::endl;

	// Popping everything from testQueue4
	std::cout << "Popping everything from testQueue 4" << std::endl << std::endl;

	std::cout << "    --> popping    : ";
	while (!testQueue4.IsEmpty())
	{
		std::cout << testQueue4.Pop() << " ";
	}

	std::cout << std::endl << std::endl;

	std::cout << "testQueue4 is now empty" << std::endl << std::endl;
}

void TestFloats()
{
	//**************************************************
	//                    QUEUE 1
	//**************************************************
	// Creating the first test queue with INT data type
	Queue<float> testQueue1;

	// Pushing 5 numbers into the queue
	std::cout << "Pushing numbers onto the testQueue1" << std::endl << std::endl;

	std::cout << "    --> pushing : ";
	for (int i = 0; i < 5; i++)
	{
		std::cout << TemplatedQueue::floatOdd[i] << " ";
		testQueue1.Push(TemplatedQueue::floatOdd[i]);
	}

	std::cout << std::endl << std::endl;

	// Printing the current queue
	std::cout << "Finished pushing onto testQueue1" << std::endl;
	std::cout << "Printing testQueue1" << std::endl << std::endl;

	testQueue1.Print("testQueue1 :");
	std::cout << std::endl;

	// Enqueueing 5 numbers onto the queue
	std::cout << "Enqueueing number into testQueue1" << std::endl << std::endl;

	std::cout << "    --> enqueueing : ";
	for (int i = 0; i < 5; i++)
	{
		std::cout << TemplatedQueue::floatEven[i] << " ";
		testQueue1.Enqueue(TemplatedQueue::floatEven[i]);
	}

	std::cout << std::endl << std::endl;

	// Printing the current queue
	std::cout << "Finished enqueueing onto testQueue1" << std::endl;
	std::cout << "Printing testQueue1" << std::endl << std::endl;

	testQueue1.Print("testQueue1 :");
	std::cout << std::endl;

	//**************************************************
	//                    QUEUE 2
	//**************************************************

	// Creating a copy of testQueue1 named testQueue2 using copy constructor
	std::cout << "Creating a copy of testQueue1" << std::endl << std::endl;

	Queue<float> testQueue2 = testQueue1;

	// Pushing 5 big numbers into testQueue1
	std::cout << "Pushing 5 big numbers into testQueue1" << std::endl << std::endl;

	std::cout << "    --> pushing : ";
	for (int i = 0; i < 5; i++)
	{
		std::cout << TemplatedQueue::floatBigNumQueue1[i] << " ";
		testQueue1.Push(TemplatedQueue::floatBigNumQueue1[i]);
	}

	std::cout << std::endl << std::endl;

	std::cout << "Finished pushing onto testQueue1" << std::endl;
	std::cout << "Printing testQueue1" << std::endl << std::endl;

	// Printing testQueue1
	testQueue1.Print("testQueue1 :");
	std::cout << std::endl;

	// Enqueueing 5 big numbers onto testQueue1
	std::cout << "Enqueueing 5 big numbers onto testQueue2" << std::endl << std::endl;

	std::cout << "    --> enqueueing : ";
	for (int i = 0; i < 5; i++)
	{
		std::cout << TemplatedQueue::floatBigNumQueue2[i] << " ";
		testQueue2.Enqueue(TemplatedQueue::floatBigNumQueue2[i]);
	}

	std::cout << std::endl << std::endl;

	std::cout << "Finished enqueueing onto testQueue2" << std::endl;
	std::cout << "Printing testQueue2" << std::endl << std::endl;

	// Printing testQueue2
	testQueue2.Print("testQueue2 :");
	std::cout << std::endl;

	// ****** PLEASE NOTE ******
	// I'm dequeueing the one queue and popping the other queue, so the values should have the same order
	// in the output even though the last 5 numbers will be different.


	//**************************************************
	//                  QUEUE 3 AND 4
	//**************************************************

	// Using copy assignment constructor to make copies of test queues
	Queue<float> testQueue3;
	testQueue3 = testQueue1;

	Queue<float> testQueue4;
	testQueue4 = testQueue2;

	// Enqueueing 5 even values onto testQueue3
	std::cout << "Enqueueing numbers into the testQueue3" << std::endl << std::endl;

	std::cout << "    --> enqueueing : ";
	for (int i = (sizeof(TemplatedQueue::floatEven) / sizeof(int)); i > 5; i--)
	{
		std::cout << TemplatedQueue::floatEven[i - 1] << " ";
		testQueue3.Enqueue(TemplatedQueue::floatEven[i - 1]);
	}

	std::cout << std::endl << std::endl;

	// Printing the current queue
	std::cout << "Finished enqueueing into testQueue3" << std::endl;
	std::cout << "Printing testQueue3" << std::endl << std::endl;

	testQueue3.Print("testQueue3 :");
	std::cout << std::endl;

	// Pushing 5 odd values onto testQueue4
	std::cout << "Pushing numbers onto the testQueue4" << std::endl << std::endl;

	std::cout << "    --> pushing : ";
	for (int i = (sizeof(TemplatedQueue::floatOdd) / sizeof(int)); i > 5; i--)
	{
		std::cout << TemplatedQueue::floatOdd[i - 1] << " ";
		testQueue4.Push(TemplatedQueue::floatOdd[i - 1]);
	}

	std::cout << std::endl << std::endl;

	// Printing the current queue
	std::cout << "Finished pushing onto testQueue4" << std::endl;
	std::cout << "Printing testQueue4" << std::endl << std::endl;

	testQueue4.Print("testQueue4 :");
	std::cout << std::endl;

	// Printing Queues 1 through 4 to show they are all different
	std::cout << "Printing Queues 1 through 4 to show they are all different" << std::endl;
	std::cout << std::endl << std::endl;

	testQueue1.Print("testQueue1 :");
	testQueue2.Print("testQueue2 :");
	testQueue3.Print("testQueue3 :");
	testQueue4.Print("testQueue4 :");

	std::cout << std::endl;
	// Dequeueing everything from testQueue1
	std::cout << "Dequeueing everything from testQueue1" << std::endl << std::endl;

	std::cout << "    --> dequeueing : ";
	while (!testQueue1.IsEmpty())
	{
		std::cout << testQueue1.DequeueBack() << " ";
	}

	std::cout << std::endl << std::endl;

	std::cout << "testQueue1 is now empty" << std::endl << std::endl;

	// Popping everything from testQueue2
	std::cout << "Popping everything from testQueue 2" << std::endl << std::endl;

	std::cout << "    --> popping    : ";
	while (!testQueue2.IsEmpty())
	{
		std::cout << testQueue2.Pop() << " ";
	}

	std::cout << std::endl << std::endl;

	std::cout << "testQueue2 is now empty" << std::endl << std::endl;

	// Dequeueing everything from testQueue3
	std::cout << "Dequeueing everything from testQueue3" << std::endl << std::endl;

	std::cout << "    --> dequeueing : ";
	while (!testQueue3.IsEmpty())
	{
		std::cout << testQueue3.DequeueBack() << " ";
	}

	std::cout << std::endl << std::endl;

	std::cout << "testQueue3 is now empty" << std::endl << std::endl;

	// Popping everything from testQueue4
	std::cout << "Popping everything from testQueue 4" << std::endl << std::endl;

	std::cout << "    --> popping    : ";
	while (!testQueue4.IsEmpty())
	{
		std::cout << testQueue4.Pop() << " ";
	}

	std::cout << std::endl << std::endl;

	std::cout << "testQueue4 is now empty" << std::endl << std::endl;
}

void TestChars()
{
	//**************************************************
	//                    QUEUE 1
	//**************************************************
	// Creating the first test queue with INT data type
	Queue<char> testQueue1;

	// Pushing 5 numbers into the queue
	std::cout << "Pushing numbers onto the testQueue1" << std::endl << std::endl;

	std::cout << "    --> pushing : ";
	for (int i = 0; i < 5; i++)
	{
		std::cout << TemplatedQueue::charLowerA[i] << " ";
		testQueue1.Push(TemplatedQueue::charLowerA[i]);
	}

	std::cout << std::endl << std::endl;

	// Printing the current queue
	std::cout << "Finished pushing onto testQueue1" << std::endl;
	std::cout << "Printing testQueue1" << std::endl << std::endl;

	testQueue1.Print("testQueue1 :");
	std::cout << std::endl;

	// Enqueueing 5 numbers onto the queue
	std::cout << "Enqueueing number into testQueue1" << std::endl << std::endl;

	std::cout << "    --> enqueueing : ";
	for (int i = 0; i < 5; i++)
	{
		std::cout << TemplatedQueue::charUpperA[i] << " ";
		testQueue1.Enqueue(TemplatedQueue::charUpperA[i]);
	}

	std::cout << std::endl << std::endl;

	// Printing the current queue
	std::cout << "Finished enqueueing onto testQueue1" << std::endl;
	std::cout << "Printing testQueue1" << std::endl << std::endl;

	testQueue1.Print("testQueue1 :");
	std::cout << std::endl;

	//**************************************************
	//                    QUEUE 2
	//**************************************************

	// Creating a copy of testQueue1 named testQueue2 using copy constructor
	std::cout << "Creating a copy of testQueue1" << std::endl << std::endl;

	Queue<char> testQueue2 = testQueue1;

	// Pushing 5 big numbers into testQueue1
	std::cout << "Pushing 5 big numbers into testQueue1" << std::endl << std::endl;

	std::cout << "    --> pushing : ";
	for (int i = 0; i < 5; i++)
	{
		std::cout << TemplatedQueue::charLowerQueue1Z[i] << " ";
		testQueue1.Push(TemplatedQueue::charLowerQueue1Z[i]);
	}

	std::cout << std::endl << std::endl;

	std::cout << "Finished pushing onto testQueue1" << std::endl;
	std::cout << "Printing testQueue1" << std::endl << std::endl;

	// Printing testQueue1
	testQueue1.Print("testQueue1 :");
	std::cout << std::endl;

	// Enqueueing 5 big numbers onto testQueue1
	std::cout << "Enqueueing 5 big numbers onto testQueue2" << std::endl << std::endl;

	std::cout << "    --> enqueueing : ";
	for (int i = 0; i < 5; i++)
	{
		std::cout << TemplatedQueue::charUpperQueue2Z[i] << " ";
		testQueue2.Enqueue(TemplatedQueue::charUpperQueue2Z[i]);
	}

	std::cout << std::endl << std::endl;

	std::cout << "Finished enqueueing onto testQueue2" << std::endl;
	std::cout << "Printing testQueue2" << std::endl << std::endl;

	// Printing testQueue2
	testQueue2.Print("testQueue2 :");
	std::cout << std::endl;

	// ****** PLEASE NOTE ******
	// I'm dequeueing the one queue and popping the other queue, so the values should have the same order
	// in the output even though the last 5 numbers will be different.


	//**************************************************
	//                  QUEUE 3 AND 4
	//**************************************************

	// Using copy assignment constructor to make copies of test queues
	Queue<char> testQueue3;
	testQueue3 = testQueue1;

	Queue<char> testQueue4;
	testQueue4 = testQueue2;

	// Enqueueing 5 even values onto testQueue3
	std::cout << "Enqueueing numbers into the testQueue3" << std::endl << std::endl;

	std::cout << "    --> enqueueing : ";
	for (int i = sizeof(TemplatedQueue::charUpperA); i > 5; i--)
	{
		std::cout << TemplatedQueue::charUpperA[i - 1] << " ";
		testQueue3.Enqueue(TemplatedQueue::charUpperA[i - 1]);
	}

	std::cout << std::endl << std::endl;

	// Printing the current queue
	std::cout << "Finished enqueueing into testQueue3" << std::endl;
	std::cout << "Printing testQueue3" << std::endl << std::endl;

	testQueue3.Print("testQueue3 :");
	std::cout << std::endl;

	// Pushing 5 odd values onto testQueue4
	std::cout << "Pushing numbers onto the testQueue4" << std::endl << std::endl;

	std::cout << "    --> pushing : ";
	for (int i = sizeof(TemplatedQueue::charLowerA); i > 5; i--)
	{
		std::cout << TemplatedQueue::charLowerA[i - 1] << " ";
		testQueue4.Push(TemplatedQueue::charLowerA[i - 1]);
	}

	std::cout << std::endl << std::endl;

	// Printing the current queue
	std::cout << "Finished pushing onto testQueue4" << std::endl;
	std::cout << "Printing testQueue4" << std::endl << std::endl;

	testQueue4.Print("testQueue4 :");
	std::cout << std::endl;

	// Printing Queues 1 through 4 to show they are all different
	std::cout << "Printing Queues 1 through 4 to show they are all different" << std::endl;
	std::cout << std::endl << std::endl;

	testQueue1.Print("testQueue1 :");
	testQueue2.Print("testQueue2 :");
	testQueue3.Print("testQueue3 :");
	testQueue4.Print("testQueue4 :");

	std::cout << std::endl;
	// Dequeueing everything from testQueue1
	std::cout << "Dequeueing everything from testQueue1" << std::endl << std::endl;

	std::cout << "    --> dequeueing : ";
	while (!testQueue1.IsEmpty())
	{
		std::cout << testQueue1.DequeueBack() << " ";
	}

	std::cout << std::endl << std::endl;

	std::cout << "testQueue1 is now empty" << std::endl << std::endl;

	// Popping everything from testQueue2
	std::cout << "Popping everything from testQueue 2" << std::endl << std::endl;

	std::cout << "    --> popping    : ";
	while (!testQueue2.IsEmpty())
	{
		std::cout << testQueue2.Pop() << " ";
	}

	std::cout << std::endl << std::endl;

	std::cout << "testQueue2 is now empty" << std::endl << std::endl;

	// Dequeueing everything from testQueue3
	std::cout << "Dequeueing everything from testQueue3" << std::endl << std::endl;

	std::cout << "    --> dequeueing : ";
	while (!testQueue3.IsEmpty())
	{
		std::cout << testQueue3.DequeueBack() << " ";
	}

	std::cout << std::endl << std::endl;

	std::cout << "testQueue3 is now empty" << std::endl << std::endl;

	// Popping everything from testQueue4
	std::cout << "Popping everything from testQueue 4" << std::endl << std::endl;

	std::cout << "    --> popping    : ";
	while (!testQueue4.IsEmpty())
	{
		std::cout << testQueue4.Pop() << " ";
	}

	std::cout << std::endl << std::endl;

	std::cout << "testQueue4 is now empty" << std::endl << std::endl;
}

void TestDoubles()
{
	//**************************************************
	//                    QUEUE 1
	//**************************************************
	// Creating the first test queue with INT data type
	Queue<double> testQueue1;

	// Pushing 5 numbers into the queue
	std::cout << "Pushing numbers onto the testQueue1" << std::endl << std::endl;

	std::cout << "    --> pushing : ";
	for (int i = 0; i < 5; i++)
	{
		std::cout << TemplatedQueue::doubleOdd[i] << " ";
		testQueue1.Push(TemplatedQueue::doubleOdd[i]);
	}

	std::cout << std::endl << std::endl;

	// Printing the current queue
	std::cout << "Finished pushing onto testQueue1" << std::endl;
	std::cout << "Printing testQueue1" << std::endl << std::endl;

	testQueue1.Print("testQueue1 :");
	std::cout << std::endl;

	// Enqueueing 5 numbers onto the queue
	std::cout << "Enqueueing number into testQueue1" << std::endl << std::endl;

	std::cout << "    --> enqueueing : ";
	for (int i = 0; i < 5; i++)
	{
		std::cout << TemplatedQueue::doubleEven[i] << " ";
		testQueue1.Enqueue(TemplatedQueue::doubleEven[i]);
	}

	std::cout << std::endl << std::endl;

	// Printing the current queue
	std::cout << "Finished enqueueing onto testQueue1" << std::endl;
	std::cout << "Printing testQueue1" << std::endl << std::endl;

	testQueue1.Print("testQueue1 :");
	std::cout << std::endl;

	//**************************************************
	//                    QUEUE 2
	//**************************************************

	// Creating a copy of testQueue1 named testQueue2 using copy constructor
	std::cout << "Creating a copy of testQueue1" << std::endl << std::endl;

	Queue<double> testQueue2 = testQueue1;

	// Pushing 5 big numbers into testQueue1
	std::cout << "Pushing 5 big numbers into testQueue1" << std::endl << std::endl;

	std::cout << "    --> pushing : ";
	for (int i = 0; i < 5; i++)
	{
		std::cout << TemplatedQueue::doubleBigNumQueue1[i] << " ";
		testQueue1.Push(TemplatedQueue::doubleBigNumQueue1[i]);
	}

	std::cout << std::endl << std::endl;

	std::cout << "Finished pushing onto testQueue1" << std::endl;
	std::cout << "Printing testQueue1" << std::endl << std::endl;

	// Printing testQueue1
	testQueue1.Print("testQueue1 :");
	std::cout << std::endl;

	// Enqueueing 5 big numbers onto testQueue1
	std::cout << "Enqueueing 5 big numbers onto testQueue2" << std::endl << std::endl;

	std::cout << "    --> enqueueing : ";
	for (int i = 0; i < 5; i++)
	{
		std::cout << TemplatedQueue::doubleBigNumQueue2[i] << " ";
		testQueue2.Enqueue(TemplatedQueue::doubleBigNumQueue2[i]);
	}

	std::cout << std::endl << std::endl;

	std::cout << "Finished enqueueing onto testQueue2" << std::endl;
	std::cout << "Printing testQueue2" << std::endl << std::endl;

	// Printing testQueue2
	testQueue2.Print("testQueue2 :");
	std::cout << std::endl;

	// ****** PLEASE NOTE ******
	// I'm dequeueing the one queue and popping the other queue, so the values should have the same order
	// in the output even though the last 5 numbers will be different.


	//**************************************************
	//                  QUEUE 3 AND 4
	//**************************************************

	// Using copy assignment constructor to make copies of test queues
	Queue<double> testQueue3;
	testQueue3 = testQueue1;

	Queue<double> testQueue4;
	testQueue4 = testQueue2;

	// Enqueueing 5 even values onto testQueue3
	std::cout << "Enqueueing numbers into the testQueue3" << std::endl << std::endl;

	std::cout << "    --> enqueueing : ";
	for (int i = (sizeof(TemplatedQueue::doubleEven) / sizeof(double)); i > 5; i--)
	{
		std::cout << TemplatedQueue::doubleEven[i - 1] << " ";
		testQueue3.Enqueue(TemplatedQueue::doubleEven[i - 1]);
	}

	std::cout << std::endl << std::endl;

	// Printing the current queue
	std::cout << "Finished enqueueing into testQueue3" << std::endl;
	std::cout << "Printing testQueue3" << std::endl << std::endl;

	testQueue3.Print("testQueue3 :");
	std::cout << std::endl;

	// Pushing 5 odd values onto testQueue4
	std::cout << "Pushing numbers onto the testQueue4" << std::endl << std::endl;

	std::cout << "    --> pushing : ";
	for (int i = (sizeof(TemplatedQueue::doubleOdd) / sizeof(double)); i > 5; i--)
	{
		std::cout << TemplatedQueue::doubleOdd[i - 1] << " ";
		testQueue4.Push(TemplatedQueue::doubleOdd[i - 1]);
	}

	std::cout << std::endl << std::endl;

	// Printing the current queue
	std::cout << "Finished pushing onto testQueue4" << std::endl;
	std::cout << "Printing testQueue4" << std::endl << std::endl;

	testQueue4.Print("testQueue4 :");
	std::cout << std::endl;

	// Printing Queues 1 through 4 to show they are all different
	std::cout << "Printing Queues 1 through 4 to show they are all different" << std::endl;
	std::cout << std::endl << std::endl;

	testQueue1.Print("testQueue1 :");
	testQueue2.Print("testQueue2 :");
	testQueue3.Print("testQueue3 :");
	testQueue4.Print("testQueue4 :");

	std::cout << std::endl;
	// Dequeueing everything from testQueue1
	std::cout << "Dequeueing everything from testQueue1" << std::endl << std::endl;

	std::cout << "    --> dequeueing : ";
	while (!testQueue1.IsEmpty())
	{
		std::cout << testQueue1.DequeueBack() << " ";
	}

	std::cout << std::endl << std::endl;

	std::cout << "testQueue1 is now empty" << std::endl << std::endl;

	// Popping everything from testQueue2
	std::cout << "Popping everything from testQueue 2" << std::endl << std::endl;

	std::cout << "    --> popping    : ";
	while (!testQueue2.IsEmpty())
	{
		std::cout << testQueue2.Pop() << " ";
	}

	std::cout << std::endl << std::endl;

	std::cout << "testQueue2 is now empty" << std::endl << std::endl;

	// Dequeueing everything from testQueue3
	std::cout << "Dequeueing everything from testQueue3" << std::endl << std::endl;

	std::cout << "    --> dequeueing : ";
	while (!testQueue3.IsEmpty())
	{
		std::cout << testQueue3.DequeueBack() << " ";
	}

	std::cout << std::endl << std::endl;

	std::cout << "testQueue3 is now empty" << std::endl << std::endl;

	// Popping everything from testQueue4
	std::cout << "Popping everything from testQueue 4" << std::endl << std::endl;

	std::cout << "    --> popping    : ";
	while (!testQueue4.IsEmpty())
	{
		std::cout << testQueue4.Pop() << " ";
	}

	std::cout << std::endl << std::endl;

	std::cout << "testQueue4 is now empty" << std::endl << std::endl;
}