#include <iostream>
using namespace std;

int main()
{
    int x;
    cout << "Enter a number to get its table = ";
    cin >> x;

    cout << "Table of the number " << x << "is :\n";

    for (int i = 1; i <= 10; i++)
    {
        cout << x << "x" << i << "=" << x * i << "\n";
    }
    return 0;
}