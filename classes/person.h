/*
  To demonstrate the constructors.
*/

#ifndef PERSON_H_
#define PERSON_H_

#include <iostream>
using namespace std;

using namespace std;

class Person {

private:
    string name;
    int age;

public:
   Person(): name("noname"), age(0) {};
   Person(string name1 , int age1): name(name1),age(age1) {};

   void toString1();
};

#endif