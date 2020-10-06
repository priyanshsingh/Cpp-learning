#include <iostream>
using namespace std;

int main()
{
    int add[5];
    int sum = 0;

    cout << "Enter 5 numbers = ";
    for (int i = 0; i < 5; i++)
    {
        cin >> add[i];
    }

    cout << endl;

    cout << "Your number is ==> ";

    for (int i = 0; i < 5; i++)
    {
        sum += add[i];
    }

    cout << "The sum of numbers is = " << sum << endl;

    return 0;
}