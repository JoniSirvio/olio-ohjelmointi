#include "myclass.h"
#include <iostream>

using namespace std;

int main()
{
    MyClass*myclass = new MyClass();
    myclass->raiseMySignal();
    delete myclass;
    myclass=nullptr;
    return 0;
}
