#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter Number 1 = ";
    cin >> a;
    cout << endl;

    cout << "Enter Number 2 = ";
    cin >> b;
    cout << endl;

    a = a + b;

    b = a - b;

    a = a - b;

    cout << "Here, the numbers are swapped \n"
         << endl
         << "The first number becomes " << a << endl
         << "And second number becomes " << b << endl;

    return 0;
}