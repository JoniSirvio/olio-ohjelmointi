#include "animal.h"
#include "dog.h"
#include <iostream>
using namespace std;

int main()
{
    Animal* animal = new Animal();
    animal->callOut();
    delete animal;
    animal=nullptr;
    Dog* dog = new Dog();
    dog->callOut();
    delete dog;
    dog=nullptr;

    return 0;
}
