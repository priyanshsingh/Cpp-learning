#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    float a, b, c, d, e, dis;
    cout << "Enter coefficient of x^2 = ";
    cin >> a;
    cout << "\nEnter coefficient of x = ";
    cin >> b;
    cout << "\nEnter value of constant in the quadratic = ";
    cin >> c;

    e = b * b;
    d = e - 2 * a * c;
    dis = sqrt(d);

    cout << d << "\n"
         << dis;

    if (d < 0)
    {
        cout << "\n\nThis equation has Imaginary Roots";
        return 0;
    }

    cout << "\nRoot 1 = " << (-b + dis) / (2 * a);

    cout << "\n\nRoot 2 = " << (-b - dis) / (2 * a);

    return 0;
}