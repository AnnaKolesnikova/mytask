class Mystring
{

public:
  Mystring();
  Mystring(int length);
  Mystring(const char *newStr);
  ~Mystring();

  void add(const char *strPart);
  void printString();
  char *getString();
  int getLength();

protected:
  void resize(int size);

  char *str;
  int allocatedMemory;
};