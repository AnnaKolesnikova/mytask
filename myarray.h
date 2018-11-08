class Myarray
{

public:
  Myarray();
  Myarray(int length);
  Myarray(const int *newArr, int length);
  ~Myarray();

  void add(const int *arrPart, int length);
  void show();
  // void resize(int size);

protected:
  int *arr;
  int numOfElements;
  int arrAllocatedMemory;

private:
  void init(int length);
};
