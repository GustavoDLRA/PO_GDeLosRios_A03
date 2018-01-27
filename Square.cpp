//
// Created by gusta on 26/01/2018.
//

#include "Square.h"
#include <math.h>

Square::Square() {
    this->side=0.0;
}
Square::Square(std::string color, bool filled, double side) {
    this->color = color;
    this->filled=filled;
    this->side=side;
}

double Square::getSide() {
    return this->side;
}
void Square::setSide(double side) {
    this->side=side;
}
void Square::setWidth(double side) {
    this->width=side;
}
void Square::setLength(double side) {
    this->length=side;
}
std::string Square::toString() {
    std::string relleno;
    this->filled?relleno="esta relleno\n":"no esta relleno\n";
    return "El cuadrado es color"+this->color+relleno;
}