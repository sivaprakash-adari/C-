/*
   Description : This program is to demonstrate new keyword.
   Date : 29-Feb-2024
*/

#include <iostream>

using namespace std;

class Animal {
    private:
        string name;

    public:
        Animal() { cout << "Animal created" << endl; };
        Animal(const Animal& obj): name(obj.name) { cout << "Animal created by copying" << endl; }; 

        ~Animal() { cout << "Animal " << name << " object destructed" << endl; };

        void setName(string aname) { name = aname;}
        void const speak() { cout << "My name is " << name << endl; }

};

Animal* createAnimal()
{
    Animal *pAn3 = new Animal();

    pAn3->setName("Tiger");
    pAn3->speak();

    return pAn3;
}

/*
   Returning reference in local variable is not acceptable.
   It may create issue while accessing the objects after it is destructed.
*/

Animal& createAnimalUsingReference()
{
    Animal na;

    na.setName("Lion");
    na.speak();
    return na;
}


int main()
{
    Animal a1;
    a1.setName("Cow");
    //a1.speak();

    Animal a2 = a1;
    a2.speak();
    a2.setName("Buffalo");
    a2.speak();

    Animal *a3 = createAnimal();
    a3->speak();
    delete a3;

    Animal a4 = createAnimalUsingReference();
    a4.speak();
    //delete a3;
    

    return 0;
}
