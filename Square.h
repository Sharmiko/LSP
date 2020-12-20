#ifndef SQUARE
#define SQUARE

#include "Rectangle.h"


class Square : public Rectangle {
public:
    Square(double width, double height) : Rectangle(width, height) {}
    void setWidth(double width);
    void setHeight(double height);
};


#endif