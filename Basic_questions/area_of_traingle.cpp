#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    float a, b, c, s, x, y, z, area;
    cout << "Enter side a of the Triangle = ";
    cin >> a;
    cout << endl;

    cout << "Enter side b of the Triangle = ";
    cin >> b;
    cout << endl;

    cout << "Enter side c of the Triangle = ";
    cin >> c;
    cout << endl;

    s = (a + b + c) / 2.00;

    cout << "Semi Perimeter of the triangle is s which is equal to " << s;
    cout << endl;

    x = s - a;
    y = s - b;
    z = s - c;

    area = sqrt(s * x * y * z);

    cout << "Area of the triangle is = " << area;
    cout << endl;

    return 0;
}