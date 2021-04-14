#include <iostream>
using namespace std;

class ComplexNumber
{
private:
    int real;
    float imaginary;

public:
    ComplexNumber()
    {
    }
    ComplexNumber(int r, float i)
    {
        real = r;
        imaginary = i;
    }
    void displayData()
    {
        cout << "The Complex Number is: " << real << " + " << imaginary << "i " << endl;
    }
    int getRealPart()
    {
        return real;
    }
    float getImgPart()
    {
        return imaginary;
    }
};

ComplexNumber add2number(ComplexNumber n1, ComplexNumber n2)
{
    int r;
    float i;
    r = n1.getRealPart() + n2.getRealPart();
    i = n1.getImgPart() + n2.getImgPart();
    ComplexNumber temp(r, i);
    return temp;
}

int main()
{
    ComplexNumber comp1(5, 4), comp2(3, 2), comp3;
    comp1.displayData();
    comp2.displayData();

    cout << "Addition of Complex Numbers: " << endl;
    comp3 = add2number(comp1, comp2);
    comp3.displayData();

    cout << endl
         << "Pointer to Object: " << endl;
    ComplexNumber *ptr;
    ptr = &comp3;
    ptr->displayData();

    return 0;
}