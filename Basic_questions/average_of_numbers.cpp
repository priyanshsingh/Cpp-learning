#include <iostream>
using namespace std;

int main()
{
    int sum = 0;

    for (int i = 0; i <= 10; i++)
    {
        int x;
        cout << "Enter a Number = ";
        cin >> x;
        sum = sum + x;
    }
    cout << "The average of the entered numbers is = " << sum / 10;
    return 0;
}