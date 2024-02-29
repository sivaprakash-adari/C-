/*
   Description : This program is to demonstrate the references.
   Date : 28-Feb-2024
*/

#include <iostream>

using namespace std;

void usingReference(int &value)
{
    value = 30;
}

int main()
{
    int value1 = 10;
    int &value2 = value1;

    cout << "Value1 : " << value1 << " Refefence Value2 : " << value2 << endl; 
    value2 = 20;
    cout << "Value1 : " << value1 << " Refefence Value2 : " << value2 << endl; 

    usingReference(value1);

    cout << "Value1 : " << value1 << " Refefence Value2 : " << value2 << endl; 

    return 0;
}