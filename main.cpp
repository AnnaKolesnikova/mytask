#include "mystring.cpp"

int main()
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

    cout << mystr.getLength() << endl;
    return 0;
}