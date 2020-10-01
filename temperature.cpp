#include <iostream>
using namespace std;

int main()
{
    char a;
    float x, y;
    cout << "In which scale do you want the value to be entered (C/F), which will be changed into the either scale ? ";
    cin >> a;

    if (a == 'C' || a == 'c')
    {
        cout << "From Celcius to Fahrenheit :\n\n";
        cout << "Enter the temperature value in Celcius that need to be converted into Fahrenheit : ";
        cin >> x;
        y = x * 1.8;
        cout << "The temperature value in Fahrenheit is : " << y + 32 << "\n";
    }
    else if (a == 'f' || a == 'F')
    {
        cout << "From Fahrenheit to Celcius :\n\n";
        cout << "Enter the temperature value in Fahrenheit that need to be converted into Celcius : ";
        cin >> x;
        y = x - 32;
        cout << "The temperature value in Fahrenheit is : " << y / 1.8 << "\n";
    }
    else
    {
        cout << "Enter value either C or F !";
    }

    return 0;
}