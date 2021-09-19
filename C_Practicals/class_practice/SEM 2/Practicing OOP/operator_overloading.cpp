#include <iostream>
using namespace std;

class ComplexNumbers
{
private:
    int real, img;

public:
    ComplexNumbers(int r = 0, int i = 0)
    {
        real = r;
        img = i;
    }
    void print()
    {
        cout << real << " + " << img << "i" << endl;
    }

    ComplexNumbers operator+(ComplexNumbers c)
    {
        ComplexNumbers temp;
        temp.real = real + c.real;
        temp.img = img + c.img;
        return temp;
    }
};

int main()
{
    ComplexNumbers num1(1, 2), num2(3, 4), num3;
    num1.print();
    num2.print();
    num3 = num1 + num2;

    cout << endl
         << "The sum of Complex Numbers is: " << endl;
    num3.print();
    return 0;
}