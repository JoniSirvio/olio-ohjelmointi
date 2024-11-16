#include "car.h"

void Car::printData()
{
    cout<<"Auton merkki, malli ja vuosimalli= "<<brand<<" "<<model<<" "<<yearModel<<" "<<endl;
}

Car::Car()
{

}

Car::Car(string b, string m, int y)
{
    brand=b;
    model=m;
    yearModel=y;
}
