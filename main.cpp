#include <iostream>
#include <cassert>
#include "Rectangle.h"
#include "Square.h"


void invariant(Rectangle& r)
{
    double height = 150.0;
    double width = 30.0;
    r.setHeight(height);
    r.setWidth(width);

    assert(r.getHeight() == height && r.getWidth() == width);
    std::cout << "Assertion complete!" << std::endl;
}

int main()
{
    Rectangle rectangle(100.0, 20.0);
    invariant(rectangle);

    Square square(20.0, 20.0);
    invariant(square);

    return 0;
}