#include <iostream>
#include <cassert>

#include "Rectangle.h"
#include "BadSquare.h"
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

    BadSquare bad_square(20.0);
    // bad implementation of square does 
    // not satisfy LSP principle
    invariant(bad_square);


    // Does not violate LSP principle
    // Square is implemented with composition
    Square square(15.0);

    return 0;
}