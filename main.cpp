#include "mystring.h"
#include "myarray.h"
#include <iostream>

#include <string.h>
#include <stdio.h>

using namespace std;

void mystringClass()
{
    Mystring mystr("abcdefghjk");
    mystr.printString();
    char *res = mystr.getString();
    for (int i = 0; i < strlen(res); i++)
    {
        cout << *(res + i);
    }
    cout << endl;

    mystr.add("12345jyrjytjhtjytjnhytkjg");
    mystr.printString();

    Mystring str2("ffffff");
    str2.printString();

    cout << mystr.getLength() << endl;
}

void myarrayClass()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    Myarray myarr(arr, sizeof(arr));

    const int arrPartLength = 6;
    int arrPart[] = {7, 8, 9, 10, 12, 13};
    myarr.add(arrPart, arrPartLength);
    myarr.show();

    // int *tmp = new int[tmpLength]

    cout << endl;
}

int main()
{
    // mystringClass();
    myarrayClass();
    // getchar();
    return 0;
}