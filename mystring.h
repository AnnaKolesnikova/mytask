class Mystring
{
  public:
    Mystring();
    char &resize(int size);

    char *str = new char[10];
    int length = 10;
};