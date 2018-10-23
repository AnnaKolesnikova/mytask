#include "mystring.h"
#include <string.h>
#include <iostream>
using namespace std;

Mystring::Mystring()
{
    str = new char[10];
    allocatedMemory = 10;
}

Mystring::Mystring(int length)
{
    str = new char[length];
    allocatedMemory = length;
}

Mystring::Mystring(const char *newStr)
{
    int newStrLength = strlen(newStr);
    str = new char[newStrLength];
    strcpy(str, newStr);
    allocatedMemory = newStrLength;
}

Mystring::~Mystring()
{
    delete[] str;
}

void Mystring::add(const char *strPart)
{
    int newStrLength = strlen(strPart) + strlen(str);
    if (newStrLength > allocatedMemory)
    {
        resize(newStrLength);
    }
    strcat(str, strPart);
}

void Mystring::resize(int size)
{
    char *temp = new char[strlen(str)];
    strcpy(temp, str);
    delete[] str;
    str = new char[size];
    strcpy(str, temp);
    delete[] temp;

    allocatedMemory = size;
}

void Mystring::printString()
{
    for (int i = 0; i < strlen(str); i++)
    {
        cout << str[i];
    }
    cout << endl;
}

char *Mystring::getString()
{
    return str;
}
int Mystring::getLength()
{
    return strlen(str);
}