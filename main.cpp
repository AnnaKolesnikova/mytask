#include "mystring.cpp"

int main()
{
    Mystring mystr;
    int newSize = 10;
    char &res = mystr.resize(newSize);
    cout << sizeof(&res);
    // for(int i = 0; i < strlen(&res); i++){

    // }
    // cout << &res;
    return 0;
}