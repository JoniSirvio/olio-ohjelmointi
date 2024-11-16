#include "car.h"
#include "rectangle.h"
#include "student.h"
#include <iostream>
#include <memory>

using namespace std;

int main()
{
    // Vaihe 1
    Car objCar;
    objCar.setBrand("Volvo");
    objCar.setModel("V60");
    objCar.setYearModel(2016);

    objCar.printData();
    cout<<"-------------------------"<<endl;

    //Vaihe 2
    Rectangle *objRectangle;
    objRectangle= new Rectangle;
    objRectangle->setHeight(12);
    objRectangle->setWidth(24);
    cout<<"Kolmion pinta-ala on= "<<objRectangle->getArea()<<endl;
    cout<<"Kolmion ympärysmitta on= "<<objRectangle->getCircum()<<endl;
    delete objRectangle;
    objRectangle=nullptr;
    cout<<"-------------------------"<<endl;

    //Vaihe 3
    unique_ptr<Student> objStudent=make_unique<Student>();
    objStudent->setName("Joni Sirviö");
    objStudent->setStudentNumber(129832);
    objStudent->setAverage(9.99);
    cout<<"Tulostetaan opiskelijan tiedot:"<<endl;
    cout<<"Nimi: "<<objStudent->getName()<<endl;
    cout<<"Opiskelijanumero: "<<objStudent->getStudentNumber()<<endl;
    cout<<"Keskiarvo: "<<objStudent->getAverage()<<endl;
    cout<<"-------------------------"<<endl;
    return 0;
}
