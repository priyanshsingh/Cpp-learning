#include <iostream>
#include <cmath>
using namespace std;

bool check(int x, int y, int z)
{
    int b = max(y, z);
    int a = max(x, b);
}

int main()
{
    int x, y, z;
    cin >> x >> y >> z;

    if (check(x, y, z))
    {
        cout << "Pythogorean Triplet";
    }
    else
    {
        cout << "Not a Pythogorean Triplet";
    }

    return 0;
}