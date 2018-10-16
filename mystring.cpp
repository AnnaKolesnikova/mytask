#include "mystring.h"
#include <string.h>
#include <iostream>
using namespace std;

Mystring::Mystring()
{
    str = new char[10];
}

Mystring::Mystring(int length)
{
    str = new char[length];
}

Mystring::Mystring(const char *newStr)
{
    str = new char[strlen(newStr)];
    strcpy(str, newStr);
}

Mystring::~Mystring()
{
}

void Mystring::resize(int size)
{
    char *temp = new char[strlen(str)];
    strcpy(temp, str);
    delete[] str;
    str = new char[size];
    strcpy(str, temp);
    delete[] temp;
}

void Mystring::printString()
{
    for (int i = 0; i < strlen(str); i++)
    {
        cout << *(str + i) << endl;
    }
}

char *Mystring::getString()
{
    return str;
}