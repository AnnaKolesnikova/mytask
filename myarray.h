class Myarray
{

public:
  Myarray();
  Myarray(int length);
  Myarray(const int *newArr, int length);
  ~Myarray();

  void add(const int *arrPart);
  // void resize(int size);

  void printArray();

protected:
  int getArrayLength();

  int *arr;
  int numOfElements;
  int arrAllocatedMemory;
};