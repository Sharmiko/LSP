#include "Rectangle.h"


Rectangle::Rectangle(double width, double height)
{
    this->width = width;
    this->height = height;
}


void Rectangle::setWidth(double width)
{
    this->width = width;
}


void Rectangle::setHeight(double height)
{
    this->height = height;
}


double Rectangle::getWidth()
{
    return this->width;
}


double Rectangle::getHeight()
{
    return this->height;
}