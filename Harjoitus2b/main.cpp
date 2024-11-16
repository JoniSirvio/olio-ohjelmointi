#include "car.h"
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<Car> carList;
    //luodaan Car-luokan olioita
    Car objCar_1=Car("Volvo","V60",2016);
    Car objCar_2=Car("Audi","A4",2011);
    Car objCar_3=Car("Toyota","Rav4",2006);

    //lisätään oliot listaan(vektoriin)
    carList.push_back(objCar_1);
    carList.push_back(objCar_2);
    carList.push_back(objCar_3);

    //Tulostetaan toisen alkion tiedot
    carList[1].printData();

    //For looppi, joka tulostaa kaikki autot
    cout<<"Kaikki autot"<<endl;
    for (int x=0; x<=2; x++){
        carList[x].printData();
}
        return 0;
}
