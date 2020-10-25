#include <iostream>
using namespace std;

int main()
{
    float a1, vol1;
    cout << "Enter the side of the cube = ";
    cin >> a1;

    vol1 = (a1 * a1 * a1);

    cout << endl
         << "Vol of the cube is = " << vol1;
    return 0;
}