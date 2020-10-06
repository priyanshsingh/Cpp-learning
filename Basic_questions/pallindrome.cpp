#include <iostream>
using namespace std;

int main()
{
    int x, num, digit, rev = 0;
    cout << "Enter a number to check whether its a pallindrome or not = ";
    cin >> num;
    x = num;
    while (num != 0)
    {
        digit = num % 10;

        num = num / 10;

        rev = (rev * 10) + digit;
    }

    if (rev == x)
    {
        cout << "Enterd number is a pallindrome";
    }
    else
    {
        cout << "\nEnetered number is not a pallindrome";
    }

    return 0;
}