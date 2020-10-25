#include <iostream>
using namespace std;

int main()
{
    float r1, vol1;
    cout << "Enter the radius of the sphere = ";
    cin >> r1;

    vol1 = (4 / 3) * (3.14) * (r1 * r1 * r1);

    cout << endl
         << "Vol of the sphere is = " << vol1;
    return 0;
}