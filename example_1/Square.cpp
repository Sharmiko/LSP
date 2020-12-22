#include "Square.h"


Square::Square(double width)
{
    this->rectangle = new Rectangle(width, width);
}


void Square::setWidth(double width)
{
    this->rectangle->setWidth(width);
    this->rectangle->setHeight(width);
}


double Square::getWidth()
{
    return this->rectangle->getWidth();
}