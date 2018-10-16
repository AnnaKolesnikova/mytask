#include "mystring.cpp"

int main()
{
    Mystring mystr("abcdef");
    int newSize = 20;
    mystr.resize(newSize);
    mystr.printString();
    char *res = mystr.getString();
    for (int i = 0; i < strlen(res); i++)
    {
        cout << *(res + i) << endl;
    }
    return 0;
}