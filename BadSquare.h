#ifndef BADSQUARE
#define BADSQUARE

#include "Rectangle.h"


class BadSquare : public Rectangle {
public:
    BadSquare(double width) : Rectangle(width, width) {}
    void setWidth(double width);
    void setHeight(double height);
};


#endif