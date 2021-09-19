#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "\nInput Number = ";
    cin >> a;
    b = a;

    while (a > 1)
    {
        a--;
        b = b * a;
    }

    cout << "Factorial is = " << b;

    return 0;
}