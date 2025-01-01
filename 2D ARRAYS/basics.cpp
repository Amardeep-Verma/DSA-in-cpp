#include <iostream>
using namespace std;

class ClassA
{
private:
  int privateData;

public:
  ClassA(int value) : privateData(value) {}

  // Friend function declaration
  friend void displayPrivateData(const ClassA &obj);
};

// Friend function definition
void displayPrivateData(const ClassA &obj)
{
  cout << "Private data :: " << obj.privateData << endl;
}

int main()
{
  ClassA obj(42);
  displayPrivateData(obj); // Accessing private member
  return 0;
}
