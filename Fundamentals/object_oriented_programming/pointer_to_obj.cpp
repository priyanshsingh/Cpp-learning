#include <iostream>
using namespace std;

class Complex_numbers
{
private:
    int real;
    float img;

public:
    Complex_numbers()
    {
    }
    Complex_numbers(int r, float i)
    {
        real = r;
        img = i;
    }
    void display_data()
    {
        cout << real << ((img > 0) ? " + " : " - ") << abs(img) << "i " << endl;
    }
    int get_real()
    {
        return real;
    }
    float get_img()
    {
        return img;
    }
};

Complex_numbers add_num(Complex_numbers a, Complex_numbers b)
{
    int r;
    float i;
    r = a.get_real() + b.get_real();
    i = a.get_img() + b.get_img();

    Complex_numbers temp(r, i);
    return temp;
}

int main()
{
    Complex_numbers comp1(5, 4), comp2(3, -7), comp3;
    comp1.display_data();
    comp2.display_data();
    cout << "Addition of Complex Numbers is : ";
    comp3 = add_num(comp1, comp2);

    comp3.display_data();
    return 0;
}