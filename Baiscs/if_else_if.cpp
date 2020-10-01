// C++ program --- Greater number finder using if-else-if statements.

#include <iostream>
using namespace std;

int main()
{
    int i = 25;
    if (i > 10)
    {
        cout << "Greater than 10";
    }
    if (i > 10 && i < 20)
    {
        cout << "\nBetween 10 and 20";
    }
    else
    {
        cout << "\nGreater than 20";
    }

    return 0;
}