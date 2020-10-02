#include <iostream>
using namespace std;

int solve(int x)
{
    if (x == 1)
    {
        return 1;
    }
    int m = x * solve(x - 1);
    return m;
}

int main()
{
    int a, b;
    cout << "\nInput Number = ";
    cin >> a;

    // b = a;

    // while (a > 1)
    // {
    //     a--;
    //     b = b * a;
    // }

    cout << "Factorial is = " << solve(a);

    return 0;
}