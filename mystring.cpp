#include "mystring.h"
#include <string.h>
#include <iostream>
using namespace std;

Mystring::Mystring() {}

char &Mystring::resize(int size)
{
    // strcpy(str, "hello");
    // char *temp = new char[length];
    char *temp = new char[length];

    strcpy(temp, str);
    delete str;
    cout << str;
    return *temp;
}