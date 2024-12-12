#include "aggregationa.h"
#include "assosiationa.h"
#include "classb.h"
#include <iostream>

using namespace std;

int main()
{
    int a (5);
    int b (10);
    int* myPointer = &a;

    cout <<"a: arvo on: "<<a<<" ja osoite on: "<< &a<<endl;
    cout <<"b: arvo on: "<<b<<" ja osoite on: "<< &b<<endl;
    cout <<"Pointterin osoittama osoite on: "<< myPointer<<endl;
    cout <<"Pointterin osoittama muistipaikan arvo on: "<< *myPointer<<endl;

    myPointer = &b;
    cout <<"Pointterin osoittama osoite on: "<< myPointer<<endl;
    cout <<"Pointterin osoittama muistipaikan arvo on: "<< *myPointer<<endl;

    int &refA = a;
    cout <<"refA osoittaa osoiteeseen: "<< &refA<<endl;
    cout <<"refA osoittaman muistipaikan arvo on: "<< refA<<endl;

    cout<<"*****VAIHE 2********"<<endl;

    ClassB objB;
    objB.setInfo("Olion B asettama info");

    AssosiationA objAss(objB);
    objAss.setBinfo("Olion objAss asettama info");

    cout<<"Assosiaatio esimerkki:"<<endl;
    cout<<"objB: "<<objB.getInfo()<<endl;
    cout<<"objAss: "<<objAss.getBinfo()<<endl;

    cout<<"*****VAIHE 3********"<<endl;

    cout<<"Aggregaatio esimerkki:"<<endl;
    ClassB &refB=objB;
    AggregationA objAggr(refB);
    objAggr.setBinfo("Olion Agr asettama info");
    cout<<"objB: "<<objB.getInfo()<<endl;
    cout<<"objAggr "<<objAggr.getBinfo()<<endl;
    cout<<endl;

    return 0;
}
