#include <iostream>
using namespace std;

namespace zoo {

class Animal {
    private:
        string name;

    public:
        Animal() { cout << "Animal created in Zoo" << endl; };
        //Animal(const Animal& obj): name(obj.name) { cout << "Animal created by copying" << endl; }; 

        ~Animal() { cout << "Animal " << name << " object destructed in Zoo" << endl; };

        void setName(string aname) { name = aname;}
        void const speak() { cout << "Zoo : My name is " << name << endl; }

};

}