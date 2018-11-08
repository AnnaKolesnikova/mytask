#include "myarray.h"
#include <iostream>
using namespace std;

Myarray::Myarray()
{
    init(10);
}

Myarray::Myarray(int length)
{
    init(length);
}

Myarray::Myarray(const int *newArr, int length)
{
    arrAllocatedMemory = length / sizeof(int);
    numOfElements = length / sizeof(int);
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

void Myarray::init(int length)
{
    arr = new int[length];
    arrAllocatedMemory = length;
    numOfElements = 0;
}

void Myarray::add(const int *arrPart, int length)
{
    const int tmpLength = length + numOfElements;
    int *tmp = new int[tmpLength];

    for (int i = 0; i < tmpLength; i++)
    {
        if (i < numOfElements)
        {
            tmp[i] = arr[i];
        }
        else
        {
            tmp[i] = arrPart[i - numOfElements];
        }
    }

    arr = tmp;
    numOfElements = tmpLength;
}

void Myarray::show()
{
    for (int i = 0; i < numOfElements; i++)
    {
        cout << arr[i] << " ";
    }
}

// void Myarray::resize(int size)
// {
// }
