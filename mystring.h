class Mystring
{

public:
  Mystring();
  Mystring(int length);
  Mystring(const char *newStr);
  ~Mystring();

  void add(const char *strPart);
  void resize(int size);
  void printString();
  char *getString();
  int getLength();

protected:
  char *str;
};