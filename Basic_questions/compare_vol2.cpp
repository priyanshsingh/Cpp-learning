#include <iostream>
using namespace std;

int main()
{
    float a1, a2, vol2, vol1;
    cout << "Enter the side of the cube 1 = ";
    cin >> a1;
    cout << "Enter the side of the cube 2 = ";
    cin >> a2;

    vol1 = (a1 * a1 * a1);
    vol2 = (a2 * a2 * a2);

    cout << endl
         << "Vol of the cube 1 is = " << vol1;
    cout << endl
         << "Vol of the cube 2 is = " << vol2;

    if (vol1 > vol2)
    {
        cout << "\nCube 1 has larger volume";
    }
    else if (vol1 == vol2)
    {
        cout << "\nCube 1 and Cube 2 have equal volume";
    }
    else
    {
        cout << "\nCube 2 has larger volume";
    }
    return 0;
}