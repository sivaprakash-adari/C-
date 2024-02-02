#include <iostream>
using namespace std;

int main()
{
  int value;
  cout << " Enter the number :";
  while (cin >> value)
  {
    cout << "The output value :" << value << endl;
    cout << "Enter the number :";
  }
}