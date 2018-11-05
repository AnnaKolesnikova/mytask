#include "myarray.h"
#include <iostream>
using namespace std;

Myarray::Myarray()
{
    arr = new int[10];
    arrAllocatedMemory = 10;
    numOfElements = 0;
}

Myarray::Myarray(int length)
{
    arr = new int[length];
    arrAllocatedMemory = length;
    numOfElements = 0;
}

Myarray::Myarray(const int *newArr, int length)
{
    arrAllocatedMemory = length;
    numOfElements = length;
    arr = new int[arrAllocatedMemory];
    for (int i = 0; i < arrAllocatedMemory; i++)
    {
        arr[i] = newArr[i];
    }
}

Myarray::~Myarray()
{
    delete[] arr;
}

void Myarray::add(const int *arrPart, int length)
{
    int newArrLength = (numOfElements + length) / sizeof(int);
    if (newArrLength > arrAllocatedMemory)
    {
        //resize();
        cout << "hello" << endl;
    }

    for (int i = 0; i < newArrLength; i++)
    {
        arr[i] = arr[i];
        arr[i + numOfElements / sizeof(int)] = arrPart[i];
    }

    for (int i = 0; i < newArrLength; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

//void Myarray::resize(int size)
//{
//	int length = sizeof(arr) / sizeof(*arr);
//	int *tempArr = new int[length];
//	for (int i = 0; i < length; i++)
//	{
//		tempArr[i] = arr[i];
//	}
//	delete[] arr;
//	arr = new int[size];
//	for (int i = 0; i < size; i++)
//	{
//		arr[i] = tempArr[i];
//	}
//	delete[] tempArr;
//
//	arrAllocatedMemory = size;
//}

void Myarray::printArray()
{
    for (int i = 0; i < numOfElements / sizeof(int); i++)
    {
        cout << arr[i];
    }
}