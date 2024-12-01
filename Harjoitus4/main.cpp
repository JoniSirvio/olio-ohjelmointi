#include <iostream>
#include"car.h"
#include"engine.h"
#include"wheel.h"

using namespace std;

int main()
{
    unique_ptr<Car> objCar = make_unique<Car>();
    objCar->setBrand("Toyota");
    objCar->setModel("Corolla");
    objCar->printData();

    return 0;
}
