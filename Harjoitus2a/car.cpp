#include "car.h"

void Car::setBrand(const string &newBrand)
{
    brand = newBrand;
}

void Car::setModel(const string &newModel)
{
    model = newModel;
}

void Car::setYearModel(int newYearModel)
{
    yearModel = newYearModel;
}

void Car::printData()
{
    cout<<"Brand is= "<<brand<< " Model is= "<<model<<" Year is= "<<yearModel<<endl;
}

Car::Car()
{

}
