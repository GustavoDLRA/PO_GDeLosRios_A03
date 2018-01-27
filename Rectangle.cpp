//
// Created by gusta on 26/01/2018.
//

#include "Rectangle.h"
#include <math.h>

Rectangle::Rectangle() {
    this->width =0.0;
    this->length=0.0;
}

Rectangle::Rectangle(double width, double length, std::string color, bool filled) {
    this->color = color;
    this->filled=filled;
    this->width=width;
    this->length=length;
}

double Rectangle::getWidth() {
    return this->width;
}
void Rectangle::setWidth(double width) {
    this->width=width;
}
double::Rectangle::getLength() {
    return this->length;
}
void::Rectangle::setLength(double length) {
    this->length=length;
}
double Rectangle::getArea() {
    return width*length;
}
double Rectangle::getPerimeter() {
    return this->width*2+this->length*2;
}
std::string Rectangle::toString() {
    std::string relleno;
    this->filled?relleno="está relleno\n":"no está relleno\n";
    return "El rectángulo es color"+this->color+relleno;
}