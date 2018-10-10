#include "mystring.h"
#include <string.h>
#include <iostream>
using namespace std;

Mystring::Mystring(int length)
{
    str = new char[length];
    strcpy(str, "hello");
};

char *Mystring::resize(int size)
{
    char *temp = new char[size];
    strcpy(temp, str);
    delete[] str;
    return temp;
}