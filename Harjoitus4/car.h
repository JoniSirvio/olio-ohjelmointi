#ifndef CAR_H
#define CAR_H
#include "engine.h"
#include "wheel.h"
#include <iostream>
#include <memory>
using namespace std;

class Car
{
private:
    string model;
    string brand;
    unique_ptr<Engine> objEngine;
    unique_ptr<Wheel> objWheel1;
    unique_ptr<Wheel> objWheel2;
    unique_ptr<Wheel> objWheel3;
    unique_ptr<Wheel> objWheel4;

public:
    Car();
    void printData();
    ~Car();
    string getModel() const;
    void setModel(const string &newModel);
    string getBrand() const;
    void setBrand(const string &newBrand);
};

#endif // CAR_H
