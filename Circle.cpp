//
// Created by gusta on 26/01/2018.
//

#include "Circle.h"
#include <math.h>
Circle::Circle() {
    this->radious=0.0;
}
Circle::Circle(std::string color,bool filled, double radious ){
    this->color=color;
    this->filled=filled;
    this->radious=radious;

}

double Circle::getRadious(){
    return this->radious;
}

void Circle::setRadious(double radious) {
    this->radious=radious;
}

double Circle::getArea() {
    return 3.1416*pow(this->radious,2);
}
double Circle::getPerimeter() {
    return 3.141*this->radious;
}

std::string Circle::toString() {
    std::string relleno;
    this->filled? relleno="está relleno \n":"no está relleno\n";
    return "El círculo es color"+this->color+relleno;
}