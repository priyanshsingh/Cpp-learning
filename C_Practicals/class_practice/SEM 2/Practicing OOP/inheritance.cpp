#include <iostream>
using namespace std;

class Shape
{
protected:
    int width;
    int height;

public:
    void setWidth(int w)
    {
        width = w;
    }
    void setHeight(int h)
    {
        height = h;
    }
};

class Rectangle : public Shape
{
public:
    int getArea()
    {
        return (width * height);
    }
};

int main()
{
    Rectangle obj1;
    obj1.setWidth(10);
    obj1.setHeight(15);

    cout << "The total area of the Rectangle is = " << obj1.getArea() << endl;
    return 0;
}