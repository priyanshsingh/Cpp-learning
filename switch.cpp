#include <iostream>
using namespace std;

int main()
{
    int i = 5;
    switch (i)
    {
    case 10:
        cout << "Value is 10";
        break;
    case 15:
        cout << "Value is 15";
        break;
    default:
        cout << "Not Found";
    }
    return 0;
}