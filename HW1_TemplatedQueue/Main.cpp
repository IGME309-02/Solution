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
	int intOdd[10] = { 1, 5, 9, 13, 17, 19, 15, 11, 7, 3 };

	// Even variables
	int intEven[10] = { 2, 6, 10, 14, 18, 20, 16, 12, 8, 4 };

	// Big numbers after copy testQueue 1
	int intBigNumQueue1[5] = { 90, 92, 94, 93, 91 };

	// Big numbers after copy testQueue 2
	int intBigNumQueue2[5] = { 995, 997, 999, 998, 996 };

	// Float data types
	// ********************************************************
	// Odd variables
	float floatOdd[10] = { 1.1f, 5.5f, 9.9f, 13.13f, 17.17f, 19.19f, 15.15f, 11.11f, 7.7f, 3.3f };

	// Even variables
	float floatEven[10] = { 2.2f, 6.6f, 10.1f, 14.14f, 18.18f, 20.2f, 16.16f, 12.12f, 8.8f, 4.4f };

	// Big numbers after copy testQueue 1
	float floatBigNumQueue1[5] = { 90.9f, 92.92f, 94.94f, 93.93f, 91.91f };

	// Big numbers after copy testQueue 2
	float floatBigNumQueue2[5] = { 995.995f, 997.997f, 999.999f, 998.998f, 996.996f };

	// Char data types
	// ********************************************************
	// Odd variables
	char charLowerA[10] = { 'a', 'c', 'e', 'g', 'i', 'j', 'h', 'f', 'd', 'b' };

	// Even variables
	char charUpperA[10] = { 'A', 'C', 'E', 'G', 'I', 'J', 'H', 'F', 'D', 'B' };

	// Big numbers after copy testQueue 1
	char charLowerQueue1Z[5] = { 'z', 'x', 'v', 'w', 'y' };

	// Big numbers after copy testQueue 2
	char charUpperQueue2Z[5] = { 'Z', 'X', 'V', 'W', 'Y' };

	// Double data types
	// ********************************************************
	// Odd variables
	double doubleOdd[10] = { 1.01, 5.05, 9.09, 13.013, 17.017, 19.019, 15.015, 11.011, 7.07, 3.03 };

	// Even variables
	double doubleEven[10] = { 2.02, 6.06, 10.010, 14.014, 18.018, 20.020, 16.016, 12.012, 8.08, 4.04 };

	// Big numbers after copy testQueue 1
	double doubleBigNumQueue1[5] = { 90.090, 92.092, 94.094, 93.093, 91.091 };

	// Big numbers after copy testQueue 2
	double doubleBigNumQueue2[5] = { 995.0995, 997.0997, 999.0999, 998.0998, 996.0996 };
};

int main()
{
	std::cout << "This section of code tests INTEGERS.  Press Enter to continue" << std::endl;
	std::cin.ignore();

	TestInts();

	std::cout << "This section of code tests FLOATS.  Press Enter to continue" << std::endl;
	std::cin.ignore();

	TestFloats();

	std::cout << "This section of code tests CHARS.  Press Enter to continue" << std::endl;
	std::cin.ignore();

	TestChars();

	std::cout << "This section of code tests DOUBLES.  Press Enter to continue" << std::endl;
	std::cin.ignore();

	TestDoubles();
}

void TestInts()
{
	//**************************************************
	//                    QUEUE 1
	//**************************************************
	// Creating the first test queue with INT data type
	Queue<int> testQueue1;

	// Pushing 5 numbers onto the queue
	std::cout << "Pushing numbers into testQueue1" << std::endl << std::endl;

	std::cout << "    --> pushing : ";
	for (int i = 0; i < 5; i++)
	{
		std::cout << TemplatedQueue::intEven[i] << " ";
		testQueue1.Push(TemplatedQueue::intEven[i]);
	}

	std::cout << std::endl << std::endl;

	// Printing the current queue
	std::cout << "Finished pushing onto testQueue1" << std::endl << std::endl;

	// Printing the result from the IsEmpty command
	std::cout << "Testing if the queue is empty : ";
	std::cout << testQueue1.IsEmpty();
	std::cout << std::endl;

	// Printing the number of elements in the queue
	std::cout << "How many elements are in the queue : ";
	std::cout << testQueue1.GetSize();
	std::cout << std::endl;

	std::cout << "Printing testQueue1" << std::endl << std::endl;

	testQueue1.Print("testQueue1 :");
	std::cout << std::endl;

	//**************************************************
	//                    QUEUE 2
	//**************************************************

	// Creating a copy of testQueue1 named testQueue2 using copy constructor
	std::cout << "Creating testQueue2 as a copy of testQueue1" << std::endl << std::endl;

	Queue<int> testQueue2 = testQueue1;
	
	std::cout << "Printing testQueue2" << std::endl << std::endl;

	// Printing testQueue2
	testQueue2.Print("testQueue2 :");
	std::cout << std::endl;

	// Pushing 5 big numbers onto testQueue1
	std::cout << "Pushing 5 big numbers onto testQueue2" << std::endl << std::endl;

	std::cout << "    --> pushing : ";
	for (int i = 0; i < 5; i++)
	{
		std::cout << TemplatedQueue::intBigNumQueue2[i] << " ";
		testQueue2.Push(TemplatedQueue::intBigNumQueue2[i]);
	}

	std::cout << std::endl << std::endl;

	std::cout << "Finished pushing onto testQueue2" << std::endl;
	std::cout << "Printing testQueue2" << std::endl << std::endl;

	// Printing testQueue2
	testQueue2.Print("testQueue2 :");
	std::cout << std::endl;

	// ****** PLEASE NOTE ******
	// I'm popping the one queue and popping the other queue, so the values should have the same order
	// in the output even though the last 5 numbers will be different.


	////**************************************************
	////                  QUEUE 3 AND 4
	////**************************************************

	//// Using copy assignment constructor to make copies of test queues
	//Queue<int> testQueue3;
	//testQueue3 = testQueue1;

	//Queue<int> testQueue4;
	//testQueue4 = testQueue2;

	//// Pushing 5 even values onto testQueue3
	//std::cout << "Pushing numbers into the testQueue3" << std::endl << std::endl;

	//std::cout << "    --> pushing : ";
	//for (int i = (sizeof(TemplatedQueue::intEven) / sizeof(int)); i > 5; i--)
	//{
	//	std::cout << TemplatedQueue::intEven[i - 1] << " ";
	//	testQueue3.Push(TemplatedQueue::intEven[i - 1]);
	//}

	//std::cout << std::endl << std::endl;

	//// Printing the current queue
	//std::cout << "Finished pushing into testQueue3" << std::endl;
	//std::cout << "Printing testQueue3" << std::endl << std::endl;

	//testQueue3.Print("testQueue3 :");
	//std::cout << std::endl;

	// Printing Queues 1 through 4 to show they are all different
	std::cout << "Printing Queues 1 through 4 to show they are all different" << std::endl;
	std::cout << std::endl << std::endl;

	testQueue1.Print("testQueue1 :");
	testQueue2.Print("testQueue2 :");
	//testQueue3.Print("testQueue3 :");
	//testQueue4.Print("testQueue4 :");

	std::cout << std::endl;
	// Popping everything from testQueue1
	std::cout << "Popping everything from testQueue1" << std::endl << std::endl;

	std::cout << "    --> popping : ";
	while (!testQueue1.IsEmpty())
	{
		std::cout << testQueue1.Pop() << " ";
	}

	std::cout << std::endl << std::endl;

	std::cout << "testQueue1 is now empty" << std::endl << std::endl;

	// Popping everything from testQueue3
	std::cout << "Popping everything from testQueue2" << std::endl << std::endl;

	std::cout << "    --> popping : ";
	while (!testQueue2.IsEmpty())
	{
		std::cout << testQueue2.Pop() << " ";
	}

	std::cout << std::endl << std::endl;

	std::cout << "testQueue2 is now empty" << std::endl << std::endl;
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
	std::cout << "Finished pushing onto testQueue1" << std::endl << std::endl;

	// Printing the result from the IsEmpty command
	std::cout << "Testing if the queue is empty : ";
	std::cout << testQueue1.IsEmpty();
	std::cout << std::endl;

	// Printing the number of elements in the queue
	std::cout << "How many elements are in the queue : ";
	std::cout << testQueue1.GetSize();
	std::cout << std::endl;
	
	std::cout << "Printing testQueue1" << std::endl << std::endl;

	testQueue1.Print("testQueue1 :");
	std::cout << std::endl;

	// Pushing 5 numbers onto the queue
	std::cout << "Pushing number into testQueue1" << std::endl << std::endl;

	std::cout << "    --> pushing : ";
	for (int i = 0; i < 5; i++)
	{
		std::cout << TemplatedQueue::floatEven[i] << " ";
		testQueue1.Push(TemplatedQueue::floatEven[i]);
	}

	std::cout << std::endl << std::endl;

	// Printing the current queue
	std::cout << "Finished pushing onto testQueue1" << std::endl << std::endl;

	// Printing the result from the IsEmpty command
	std::cout << "Testing if the queue is empty : ";
	std::cout << testQueue1.IsEmpty();
	std::cout << std::endl;

	// Printing the number of elements in the queue
	std::cout << "How many elements are in the queue : ";
	std::cout << testQueue1.GetSize();
	std::cout << std::endl;

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

	std::cout << "Finished pushing onto testQueue1" << std::endl << std::endl;

	// Printing the result from the IsEmpty command
	std::cout << "Testing if the queue is empty : ";
	std::cout << testQueue1.IsEmpty();
	std::cout << std::endl;

	// Printing the number of elements in the queue
	std::cout << "How many elements are in the queue : ";
	std::cout << testQueue1.GetSize();
	std::cout << std::endl;

	std::cout << "Printing testQueue1" << std::endl << std::endl;

	// Printing testQueue1
	testQueue1.Print("testQueue1 :");
	std::cout << std::endl;

	// Pushing 5 big numbers onto testQueue1
	std::cout << "Pushing 5 big numbers onto testQueue2" << std::endl << std::endl;

	std::cout << "    --> pushing : ";
	for (int i = 0; i < 5; i++)
	{
		std::cout << TemplatedQueue::floatBigNumQueue2[i] << " ";
		testQueue2.Push(TemplatedQueue::floatBigNumQueue2[i]);
	}

	std::cout << std::endl << std::endl;

	std::cout << "Finished pushing onto testQueue2" << std::endl;
	std::cout << "Printing testQueue2" << std::endl << std::endl;

	// Printing testQueue2
	testQueue2.Print("testQueue2 :");
	std::cout << std::endl;

	// ****** PLEASE NOTE ******
	// I'm popping the one queue and popping the other queue, so the values should have the same order
	// in the output even though the last 5 numbers will be different.


	////**************************************************
	////                  QUEUE 3 AND 4
	////**************************************************

	//// Using copy assignment constructor to make copies of test queues
	//Queue<float> testQueue3;
	//testQueue3 = testQueue1;

	//Queue<float> testQueue4;
	//testQueue4 = testQueue2;

	//// Pushing 5 even values onto testQueue3
	//std::cout << "Pushing numbers into the testQueue3" << std::endl << std::endl;

	//std::cout << "    --> pushing : ";
	//for (int i = (sizeof(TemplatedQueue::floatEven) / sizeof(int)); i > 5; i--)
	//{
	//	std::cout << TemplatedQueue::floatEven[i - 1] << " ";
	//	testQueue3.Push(TemplatedQueue::floatEven[i - 1]);
	//}

	//std::cout << std::endl << std::endl;

	//// Printing the current queue
	//std::cout << "Finished pushing into testQueue3" << std::endl;
	//std::cout << "Printing testQueue3" << std::endl << std::endl;

	//testQueue3.Print("testQueue3 :");
	//std::cout << std::endl;

	//// Pushing 5 odd values onto testQueue4
	//std::cout << "Pushing numbers onto the testQueue4" << std::endl << std::endl;

	//std::cout << "    --> pushing : ";
	//for (int i = (sizeof(TemplatedQueue::floatOdd) / sizeof(int)); i > 5; i--)
	//{
	//	std::cout << TemplatedQueue::floatOdd[i - 1] << " ";
	//	testQueue4.Push(TemplatedQueue::floatOdd[i - 1]);
	//}

	//std::cout << std::endl << std::endl;

	//// Printing the current queue
	//std::cout << "Finished pushing onto testQueue4" << std::endl;
	//std::cout << "Printing testQueue4" << std::endl << std::endl;

	//testQueue4.Print("testQueue4 :");
	//std::cout << std::endl;

	// Printing Queues 1 through 4 to show they are all different
	std::cout << "Printing Queues 1 through 4 to show they are all different" << std::endl;
	std::cout << std::endl << std::endl;

	testQueue1.Print("testQueue1 :");
	testQueue2.Print("testQueue2 :");
	/*testQueue3.Print("testQueue3 :");
	testQueue4.Print("testQueue4 :");*/

	std::cout << std::endl;
	// Popping everything from testQueue1
	std::cout << "Popping everything from testQueue1" << std::endl << std::endl;

	std::cout << "    --> popping : ";
	while (!testQueue1.IsEmpty())
	{
		std::cout << testQueue1.Pop() << " ";
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

	//// Popping everything from testQueue3
	//std::cout << "Popping everything from testQueue3" << std::endl << std::endl;

	//std::cout << "    --> popping : ";
	//while (!testQueue3.IsEmpty())
	//{
	//	std::cout << testQueue3.Pop() << " ";
	//}

	//std::cout << std::endl << std::endl;

	//std::cout << "testQueue3 is now empty" << std::endl << std::endl;

	//// Popping everything from testQueue4
	//std::cout << "Popping everything from testQueue 4" << std::endl << std::endl;

	//std::cout << "    --> popping    : ";
	//while (!testQueue4.IsEmpty())
	//{
	//	std::cout << testQueue4.Pop() << " ";
	//}

	//std::cout << std::endl << std::endl;

	//std::cout << "testQueue4 is now empty" << std::endl << std::endl;
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
	std::cout << "Finished pushing onto testQueue1" << std::endl << std::endl;
	std::cout << "Printing testQueue1" << std::endl << std::endl;

	testQueue1.Print("testQueue1 :");
	std::cout << std::endl;

	// Pushing 5 numbers onto the queue
	std::cout << "Pushing number into testQueue1" << std::endl << std::endl;

	std::cout << "    --> pushing : ";
	for (int i = 0; i < 5; i++)
	{
		std::cout << TemplatedQueue::charUpperA[i] << " ";
		testQueue1.Push(TemplatedQueue::charUpperA[i]);
	}

	std::cout << std::endl << std::endl;

	// Printing the current queue
	std::cout << "Finished pushing onto testQueue1" << std::endl << std::endl;
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

	std::cout << "Finished pushing onto testQueue1" << std::endl << std::endl;
	std::cout << "Printing testQueue1" << std::endl << std::endl;

	// Printing testQueue1
	testQueue1.Print("testQueue1 :");
	std::cout << std::endl;

	// Pushing 5 big numbers onto testQueue1
	std::cout << "Pushing 5 big numbers onto testQueue2" << std::endl << std::endl;

	std::cout << "    --> pushing : ";
	for (int i = 0; i < 5; i++)
	{
		std::cout << TemplatedQueue::charUpperQueue2Z[i] << " ";
		testQueue2.Push(TemplatedQueue::charUpperQueue2Z[i]);
	}

	std::cout << std::endl << std::endl;

	std::cout << "Finished pushing onto testQueue2" << std::endl;
	std::cout << "Printing testQueue2" << std::endl << std::endl;

	// Printing testQueue2
	testQueue2.Print("testQueue2 :");
	std::cout << std::endl;

	// ****** PLEASE NOTE ******
	// I'm popping the one queue and popping the other queue, so the values should have the same order
	// in the output even though the last 5 numbers will be different.


//	//**************************************************
//	//                  QUEUE 3 AND 4
//	//**************************************************
//
//	// Using copy assignment constructor to make copies of test queues
//	Queue<char> testQueue3;
//	testQueue3 = testQueue1;
//
//	Queue<char> testQueue4;
//	testQueue4 = testQueue2;
//
//	// Pushing 5 even values onto testQueue3
//	std::cout << "Pushing numbers into the testQueue3" << std::endl << std::endl;
//
//	std::cout << "    --> pushing : ";
//	for (int i = sizeof(TemplatedQueue::charUpperA); i > 5; i--)
//	{
//		std::cout << TemplatedQueue::charUpperA[i - 1] << " ";
//		testQueue3.Push(TemplatedQueue::charUpperA[i - 1]);
//	}
//
//	std::cout << std::endl << std::endl;
//
//	// Printing the current queue
//	std::cout << "Finished pushing into testQueue3" << std::endl;
//	std::cout << "Printing testQueue3" << std::endl << std::endl;
//
//	testQueue3.Print("testQueue3 :");
//	std::cout << std::endl;
//
//	// Pushing 5 odd values onto testQueue4
//	std::cout << "Pushing numbers onto the testQueue4" << std::endl << std::endl;
//
//	std::cout << "    --> pushing : ";
//	for (int i = sizeof(TemplatedQueue::charLowerA); i > 5; i--)
//	{
//		std::cout << TemplatedQueue::charLowerA[i - 1] << " ";
//		testQueue4.Push(TemplatedQueue::charLowerA[i - 1]);
//	}
//
//	std::cout << std::endl << std::endl;
//
//	// Printing the current queue
//	std::cout << "Finished pushing onto testQueue4" << std::endl;
//	std::cout << "Printing testQueue4" << std::endl << std::endl;
//
//	testQueue4.Print("testQueue4 :");
//	std::cout << std::endl;
//
	// Printing Queues 1 through 4 to show they are all different
	std::cout << "Printing Queues 1 through 4 to show they are all different" << std::endl;
	std::cout << std::endl << std::endl;

	testQueue1.Print("testQueue1 :");
	testQueue2.Print("testQueue2 :");
	/*testQueue3.Print("testQueue3 :");
	testQueue4.Print("testQueue4 :");*/

	std::cout << std::endl;
	// Popping everything from testQueue1
	std::cout << "Popping everything from testQueue1" << std::endl << std::endl;

	std::cout << "    --> popping : ";
	while (!testQueue1.IsEmpty())
	{
		std::cout << testQueue1.Pop() << " ";
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

//	// Popping everything from testQueue3
//	std::cout << "Popping everything from testQueue3" << std::endl << std::endl;
//
//	std::cout << "    --> popping : ";
//	while (!testQueue3.IsEmpty())
//	{
//		std::cout << testQueue3.Pop() << " ";
//	}
//
//	std::cout << std::endl << std::endl;
//
//	std::cout << "testQueue3 is now empty" << std::endl << std::endl;
//
//	// Popping everything from testQueue4
//	std::cout << "Popping everything from testQueue 4" << std::endl << std::endl;
//
//	std::cout << "    --> popping    : ";
//	while (!testQueue4.IsEmpty())
//	{
//		std::cout << testQueue4.Pop() << " ";
//	}
//
//	std::cout << std::endl << std::endl;
//
//	std::cout << "testQueue4 is now empty" << std::endl << std::endl;
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
	std::cout << "Finished pushing onto testQueue1" << std::endl << std::endl;
	std::cout << "Printing testQueue1" << std::endl << std::endl;

	testQueue1.Print("testQueue1 :");
	std::cout << std::endl;

	// Pushing 5 numbers onto the queue
	std::cout << "Pushing number into testQueue1" << std::endl << std::endl;

	std::cout << "    --> pushing : ";
	for (int i = 0; i < 5; i++)
	{
		std::cout << TemplatedQueue::doubleEven[i] << " ";
		testQueue1.Push(TemplatedQueue::doubleEven[i]);
	}

	std::cout << std::endl << std::endl;

	// Printing the current queue
	std::cout << "Finished pushing onto testQueue1" << std::endl << std::endl;
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

	std::cout << "Finished pushing onto testQueue1" << std::endl << std::endl;
	std::cout << "Printing testQueue1" << std::endl << std::endl;

	// Printing testQueue1
	testQueue1.Print("testQueue1 :");
	std::cout << std::endl;

	// Pushing 5 big numbers onto testQueue1
	std::cout << "Pushing 5 big numbers onto testQueue2" << std::endl << std::endl;

	std::cout << "    --> pushing : ";
	for (int i = 0; i < 5; i++)
	{
		std::cout << TemplatedQueue::doubleBigNumQueue2[i] << " ";
		testQueue2.Push(TemplatedQueue::doubleBigNumQueue2[i]);
	}

	std::cout << std::endl << std::endl;

	std::cout << "Finished pushing onto testQueue2" << std::endl;
	std::cout << "Printing testQueue2" << std::endl << std::endl;

	// Printing testQueue2
	testQueue2.Print("testQueue2 :");
	std::cout << std::endl;

	// ****** PLEASE NOTE ******
	// I'm popping the one queue and popping the other queue, so the values should have the same order
	// in the output even though the last 5 numbers will be different.


//	//**************************************************
//	//                  QUEUE 3 AND 4
//	//**************************************************
//
//	// Using copy assignment constructor to make copies of test queues
//	Queue<double> testQueue3;
//	testQueue3 = testQueue1;
//
//	Queue<double> testQueue4;
//	testQueue4 = testQueue2;
//
//	// Pushing 5 even values onto testQueue3
//	std::cout << "Pushing numbers into the testQueue3" << std::endl << std::endl;
//
//	std::cout << "    --> pushing : ";
//	for (int i = (sizeof(TemplatedQueue::doubleEven) / sizeof(double)); i > 5; i--)
//	{
//		std::cout << TemplatedQueue::doubleEven[i - 1] << " ";
//		testQueue3.Push(TemplatedQueue::doubleEven[i - 1]);
//	}
//
//	std::cout << std::endl << std::endl;
//
//	// Printing the current queue
//	std::cout << "Finished pushing into testQueue3" << std::endl;
//	std::cout << "Printing testQueue3" << std::endl << std::endl;
//
//	testQueue3.Print("testQueue3 :");
//	std::cout << std::endl;
//
//	// Pushing 5 odd values onto testQueue4
//	std::cout << "Pushing numbers onto the testQueue4" << std::endl << std::endl;
//
//	std::cout << "    --> pushing : ";
//	for (int i = (sizeof(TemplatedQueue::doubleOdd) / sizeof(double)); i > 5; i--)
//	{
//		std::cout << TemplatedQueue::doubleOdd[i - 1] << " ";
//		testQueue4.Push(TemplatedQueue::doubleOdd[i - 1]);
//	}
//
//	std::cout << std::endl << std::endl;
//
//	// Printing the current queue
//	std::cout << "Finished pushing onto testQueue4" << std::endl;
//	std::cout << "Printing testQueue4" << std::endl << std::endl;
//
//	testQueue4.Print("testQueue4 :");
//	std::cout << std::endl;
//
	// Printing Queues 1 through 4 to show they are all different
	std::cout << "Printing Queues 1 through 4 to show they are all different" << std::endl;
	std::cout << std::endl << std::endl;

	testQueue1.Print("testQueue1 :");
	testQueue2.Print("testQueue2 :");
	/*testQueue3.Print("testQueue3 :");
	testQueue4.Print("testQueue4 :");*/

	std::cout << std::endl;
	// Popping everything from testQueue1
	std::cout << "Popping everything from testQueue1" << std::endl << std::endl;

	std::cout << "    --> popping : ";
	while (!testQueue1.IsEmpty())
	{
		std::cout << testQueue1.Pop() << " ";
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
//
//	// Popping everything from testQueue3
//	std::cout << "Popping everything from testQueue3" << std::endl << std::endl;
//
//	std::cout << "    --> popping : ";
//	while (!testQueue3.IsEmpty())
//	{
//		std::cout << testQueue3.Pop() << " ";
//	}
//
//	std::cout << std::endl << std::endl;
//
//	std::cout << "testQueue3 is now empty" << std::endl << std::endl;
//
//	// Popping everything from testQueue4
//	std::cout << "Popping everything from testQueue 4" << std::endl << std::endl;
//
//	std::cout << "    --> popping    : ";
//	while (!testQueue4.IsEmpty())
//	{
//		std::cout << testQueue4.Pop() << " ";
//	}
//
//	std::cout << std::endl << std::endl;
//
//	std::cout << "testQueue4 is now empty" << std::endl << std::endl;
}