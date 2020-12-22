#ifndef RECTANGLE 
#define RECTANGLE

#include <string>

class Rectangle {
public:
    Rectangle(double width, double height);
    virtual void setWidth(double width);
    virtual void setHeight(double height);
    double getWidth() const;
    double getHeight() const;

protected:
    double width;
    double height;
};

#endif 