//
// Created by gusta on 26/01/2018.
//

#ifndef PO_GDELOSRIOS_A03C_SQUARE_H
#define PO_GDELOSRIOS_A03C_SQUARE_H

#include "Rectangle.h"
class Square: virtual public Rectangle {
protected:
    double side;
public:
    Square();
    Square(double side);
    Square(std::string color, bool filled, double side);
    double getSide();
    void setSide(double side);
    void setWidth(double side);
    void setLength(double side);
    std::string toString();

};


#endif //PO_GDELOSRIOS_A03C_SQUARE_H
