#include <iostream>
using namespace std;

int main()
{
    int a, b, c;

    cout << "Enter Number 1 = ";
    cin >> a;
    cout << endl;
    cout << "Enter Number 2 = ";
    cin >> b;
    cout << endl;
    cout << "Enter Number 3 = ";
    cin >> c;
    cout << endl;

    if (a > b)
    {
        if (a > c)
        {
            cout << a << " is the greatest";
        }
        else
        {
            cout << c << " is the greatest";
        }
    }
    else
    {
        if (b > c)
        {
            cout << b << " is the greatest";
        }
        else
        {
            cout << c << " is the greatest";
        }
    }
    return 0;
}