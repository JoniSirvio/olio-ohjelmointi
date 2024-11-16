#ifndef RECTANGLE_H
#define RECTANGLE_H
#include<iostream>

class Rectangle
{
private:
    double width;
    double height;

public:
    Rectangle();
    ~Rectangle();
    void setWidth(double newWidth);
    void setHeight(double newHeight);
    double area;
    double circum;
    double getArea() const;
    double getCircum() const;
};

#endif // RECTANGLE_H
