#include "mystring.cpp"

int main()
{
    int initialSize = 5;
    Mystring mystr(initialSize);
    int newSize = 10;
    char *res = mystr.resize(newSize);
    for (int i = 0; i < newSize; i++)
    {
        cout << *(res + i) << endl;
    }

    return 0;
}