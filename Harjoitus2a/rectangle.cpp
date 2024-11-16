#include "rectangle.h"
using namespace std;

void Rectangle::setWidth(double newWidth)
{
    width = newWidth;
}

void Rectangle::setHeight(double newHeight)
{
    height = newHeight;
}

double Rectangle::getCircum() const
{
    return 2* (width+ height);
}

double Rectangle::getArea() const
{
    return width*height;
}

Rectangle::Rectangle()
{
    //cout<<"Rectangle olio luotiin"<<endl; //Tällä testasin luomisen
}

Rectangle::~Rectangle()
{
    //cout<<"Rectangle olio tuhottiin"<<endl; // Tällä testasin tuhoutumisen
}
