/*
   Description : This program is to demonstrate the use of const.
   Date : 28-Feb-2024
*/

#include <iostream>
#include <sstream>

using namespace std;

class Animal {
    private:
        string name;
        string color;

    public:
    Animal(string aName, string aColor) {
       name = aName;
       color = aColor;
    }
    void display() const { 
        cout << " The color of Animal - " << name << " is " << color << endl; 
        //color = "RGB";
        cout << " New color of Animal - " << name << " is " << color << endl; 

    }
};

int main()
{
    Animal a1("cow", "white");
    Animal a2("buffalo", "black");
    Animal a3("Lion", "brown");

    a1.display();
    a2.display();
    a3.display();

    Animal *a4 = new Animal("Parrot", "green");

    a4->display();

    Animal *a5 = new Animal("Elephant", "Grey");

    (*a5).display();
    
    a5 = a4;

    a5->display();
    
    int value=10;
    int  * pValue = &value;
    //int  * const pValue = &value;
    //const int  *pValue = &value;
    //int *pValue = &value;

    cout << "The value = " << *pValue << endl;

    int *nValue = pValue;

    cout << "The new pointer = " << *nValue << endl;

    *nValue = 20;

    cout << "The value = " << *pValue << endl;
    cout << "The new pointer = " << *nValue << endl;
    
    int number = 3;

    pValue = &number;    // Error with int  * const pValue ; declaration.
    *pValue = 30;        // const int  *pValue = &value;

    cout << "The value = " << *pValue << endl;

    return 0;
}