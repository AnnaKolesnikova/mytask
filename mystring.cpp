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

void Mystring::add(const char *strPart)
{
    // int sum = strlen(strPart) + strlen(str);
    // if ((strlen(strPart) + strlen(str)))
    // {
    // }
    resize(strlen(strPart) + strlen(str));
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