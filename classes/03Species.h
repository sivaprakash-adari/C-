#include <iostream>
using namespace std;

namespace Species {

class Animal {
    private:
        string name;

    public:
        Animal() { cout << "Animal created in species" << endl; };
        //Animal(const Animal& obj): name(obj.name) { cout << "Animal created by copying" << endl; }; 

        ~Animal() { cout << "Animal " << name << " object destructed in species" << endl; };

        void setName(string aname) { name = aname;}
        void const speak() { cout << "Species : My name is " << name << endl; }

};

}