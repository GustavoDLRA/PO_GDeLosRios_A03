//
// Created by gusta on 26/01/2018.
//

#ifndef PO_GDELOSRIOS_A03C_RECTANGLE_H
#define PO_GDELOSRIOS_A03C_RECTANGLE_H

#include "Shape.h"

class Rectangle : virtual public Shape {
protected:
    double width;
    double length;
public:
    Rectangle();
    Rectangle(double width, double length, std::string color, bool filled);
    double getWidth();
    void setWidth(double width);
    double getLength();
    void setLength(double length);
    double getArea();
    double getPerimeter();
    std::string toString();
};


#endif //PO_GDELOSRIOS_A03C_RECTANGLE_H
