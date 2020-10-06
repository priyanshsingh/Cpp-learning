#include <iostream>
using namespace std;

int main()
{
    int add[5];
    cout << "Enter 5 numbers = ";
    for (int i = 0; i < 5; i++)
    {
        cin >> add[i];
    }
    cout << endl;
    cout << "Your number is ==> ";

    for (int i = 0; i < 5; i++)
    {
        cout << add[i] << " ";
    }

    cout << endl;

    return 0;
}