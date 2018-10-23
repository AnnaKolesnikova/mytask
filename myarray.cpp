#include "myarray.h"

Myarray::Myarray()
{
}

// Mystring::Mystring(int length)
// {
//     str = new char[length];
//     allocatedMemory = length;
// }

// Mystring::Mystring(const char *newStr)
// {
//     int newStrLength = strlen(newStr);
//     str = new char[newStrLength];
//     strcpy(str, newStr);
//     allocatedMemory = newStrLength;
// }

Myarray::~Myarray()
{
    delete[] arr;
}