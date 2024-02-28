/*
   To demonstrate constructors and Intialization lists
   03-02-2024
*/

#include <iostream>
#include <sstream>
#include "person.h"

using namespace std;


void Person::toString1() {
   stringstream ss;
   ss << "The output of the member \n";
   ss << " The name of the person: " << this->name << ", ";
   ss << "The age of the person: " << this->age << " ";
   string info = ss.str();
   cout << info << endl;
}

int main()
{
    Person person1;
    Person person2("sachin",50);
    Person person3("dravid",45);

    person1.toString1();
    person2.toString1();
    person3.toString1();

    return 0;
}
