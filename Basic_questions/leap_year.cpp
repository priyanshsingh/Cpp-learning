#include <iostream>
using namespace std;

int main()
{
    int y;
    cout << "Enter a year to check whether its a leap year or not !!! = ";
    cin >> y;
    cout << "\n";

    if (y % 4 == 0)
    {
        if (y % 100 == 0)
        {
            if (y % 400 == 0)
            {
                cout << "\nThe year " << y << " is a leap year !!!";
            }
            else
            {
                cout << "\nThe year " << y << " is not a leap year !!!";
            }
        }
        else
        {
            cout << "\nThe year " << y << " is a leap year !!!";
        }
    }
    else
    {
        cout << "\nThe year " << y << " is not a leap year !!!";
    }

    return 0;
}