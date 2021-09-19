#include <iostream>
using namespace std;

int add(int a, int b)
{
    cout << "Funtion 1" << endl;
    return (a + b);
}

int add(int a, int b, int c)
{
    cout << "Funtion 2" << endl;

    return (a + b + c);
}

double add(double a, double b)
{
    cout << "Funtion 3" << endl;

    return (a + b);
}

double add(int a, double b)
{
    cout << "Funtion 4" << endl;

    return (a + b);
}

double add(double a, int b)
{
    cout << "Funtion 5" << endl;

    return (a + b);
}

int main()
{
    cout << add(1.1, 2)
         << endl;

    return 0;
}