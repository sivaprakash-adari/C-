/*
   Description : This program is to demonstrate namespace.
   Date : 29-Feb-2024
*/

#include <iostream>
#include "03Animal.h"
#include "03Species.h"


using namespace std;
using namespace zoo;

int main()
{
    Animal a1;
    a1.setName("Cow");
    //a1.speak();

    Animal a2 = a1;
    a2.speak();
    a2.setName("Buffalo");
    a2.speak();

    Species::Animal a3;
    
    a3.setName("Tiger");
    a3.speak();

    return 0;
}
