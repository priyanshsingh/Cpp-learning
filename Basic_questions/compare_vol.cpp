#include <iostream>
using namespace std;

int main()
{
    float r1, r2, vol1, vol2;
    cout << "Enter the radius of the sphere 1 = ";
    cin >> r1;

    cout << "Enter the radius of the sphere 2 = ";
    cin >> r2;

    vol1 = (4 / 3) * (3.14) * (r1 * r1 * r1);
    vol2 = (4 / 3) * (3.14) * (r2 * r2 * r2);

    cout << endl
         << "Vol of the sphere 1 is = " << vol1;
    cout << endl
         << "Vol of the sphere 2 is = " << vol2;

    if (vol1 > vol2)
    {
        cout << "\nSphere 1 has larger volume";
    }
    else if (vol1 == vol2)
    {
        cout << "\nSphere 1 and sphere 2 have equal volume";
    }
    else
    {
        cout << "\nSphere 2 has larger volume";
    }

    return 0;
}