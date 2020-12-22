## Examples illustrating liskov substitution principle
</br>

### <b>Example 1</b>

It shows simple example of Rectangle/Square implementation through inheritance.

Rectangle:

```c++
class Rectangle {
public:
    Rectangle(double width, double height);
    virtual void setWidth(double width);
    virtual void setHeight(double height);
    double getWidth();
    double getHeight();

protected:
    double width;
    double height;
};

```

Bad implementation of Square:

```c++
class BadSquare : public Rectangle {
public:
    BadSquare(double width) : Rectangle(width, width) {}
    void setWidth(double width);
    void setHeight(double height);
};
```

This implementations violate LSP principle.
> If S is a subtype of T, then objects of type T may be replaced with objects of type S (an object of type T may be substituted with any object of a subtype S) without altering any of the desirable properties of the program.

Because It cannot pass simple test of substitution.
```c++
void invariant(Rectangle& r)
{
    double height = 150.0;
    double width = 30.0;
    r.setHeight(height);
    r.setWidth(width);

    assert(r.getHeight() == height && r.getWidth() == width);
    std::cout << "Assertion complete!" << std::endl;
}
```
If we were to subsitute `Rectangle` type with `Square`, if will fail simple assertion test.


But If we were to implement, `Square` without inheritance and use compostion, we would not violate LSP principle, still there will be some trade-offs, but will be better then previous implementation.

New implementation of Square using composition:
```c++
class Square {
public:
    Square(double width);
    void setWidth(double width);
    double getWidth();

private:
    Rectangle* rectangle;
};
```

In this case we can no longer pass `Square` in place of `Rectangle`, this ensures that LSP is not broker, but there is still some trade-offs.


</br>

### Example 2

#### TODO