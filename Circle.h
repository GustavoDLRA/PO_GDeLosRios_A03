//
// Created by gusta on 26/01/2018.
//

#ifndef PO_GDELOSRIOS_A03C_CIRCLE_H
#define PO_GDELOSRIOS_A03C_CIRCLE_H

#include "Shape.h"
class Circle : virtual public Shape {
protected:
    double radious;
public:
    Circle();
    Circle(std::string color, bool filled, double radious);
    double getRadious();
    void setRadious(double radious);
    double getArea();
    double getPerimeter();
    std::string toString();

};


#endif //PO_GDELOSRIOS_A03C_CIRCLE_H
