#include<iostream>

using namespace std;

int main()
{
  int id = 25, io = 031, ih = 0x19;
  cout << "decimal=" << id << " octal=" << io << " hexa=" << ih << endl;

  float n, m, o, p, q;
  n = 3.14159;
  
  m = 3.14159E2;
  o = 3.14159e3;
  p = 3.14159E-1;
  q = 3.14159e-2;
  cout << "n=" << n << " m=" << m << " o=" << o << " p=" << p << " q=" << q << endl;

  string str = "this is test";
  cout << "literal " << str << "\a" << endl;
  return 0;
}