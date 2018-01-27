//
// Created by gusta on 26/01/2018.
//

#ifndef PO_GDELOSRIOS_A03C_SHAPE_H
#define PO_GDELOSRIOS_A03C_SHAPE_H

#include <string>
class Shape {
protected:
    //Atributos
    std::string color;
    bool filled;
public:
    //Metodos
    Shape();
    Shape(std::string color, bool filled);
    std::string getColor();
    void setColor(std::string color);
    bool isFilled();
    void setFilled(bool filled);
    virtual double getArea()=0; //Las clases abstractas puras
    virtual double getPerimeter()=0; //Se declaran mediante el
    virtual std::string toString()=0; //uso de virtual en C
};


#endif //PO_GDELOSRIOS_A03C_SHAPE_H
