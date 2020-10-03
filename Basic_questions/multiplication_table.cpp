#include <iostream>
using namespace std;

int main()
{
    int x;
    cout << "Enter a number to get its table = ";
    cin >> x;

    cout << "Table of the number " << x << "is :\n";

    for (int i = 0; i <= 10; i++)
    {
        cout << x << "*" << i << "=" << x * i;
    }
    return 0;
}