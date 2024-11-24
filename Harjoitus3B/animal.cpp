#include "animal.h"
#include <iostream>
using namespace std;

void Animal::callOut()
{
    cout<<"Eläin ääntelee"<<endl;
}

Animal::~Animal()
{
    cout<<"Animal destruktori"<<endl;

}

Animal::Animal() {}
