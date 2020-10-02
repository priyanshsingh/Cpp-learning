#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter a number to grt its factors = ";
    cin >> a;
    b = a / 2;

    for (int i = 1; i <= b; i++)
    {
        if (a % i == 0)
        {
            cout << i << ", ";
        }
    }
    cout << a;
    return 0;
}