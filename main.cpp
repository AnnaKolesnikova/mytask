#include "mystring.cpp"

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

int main()
{
    mystringClass();
    return 0;
}