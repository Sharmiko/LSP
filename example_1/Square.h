#ifndef SQUARE
#define SQUARE

#include "Rectangle.h"


class Square {
public:
    Square(double width);
    void setWidth(double width);
    double getWidth();

private:
    Rectangle* rectangle;
};


#endif