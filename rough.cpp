#include <iostream>
using namespace std;

int main()
{
    char x;
    while (1)
    {
        int a;
        cout << "Type a number to print its table = ";
        cin >> a;

        for (int i = 1; i <= 10; i++)
        {
            cout << a << " x " << i << " = " << a * i << "\n";
        }

        cout << "Do you want to print more tables? (Y/N) : ";
        cin >> x;

        if (x == 'y' || x == 'Y')
        {
            continue;
        }
        else
        {
            break;
        }
    }
    return 0;
}
