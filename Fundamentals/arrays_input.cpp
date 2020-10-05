#include <iostream>
using namespace std;

int main()
{
    char letters[100];

    cout << "Enter your name = ";

    for (int i = 0; i < 5; i++)
    {
        cin >> letters[i];
        cout << endl;
    }

    cout << "Your name is ==> ";

    for (int i = 0; i < 5; i++)
    {
        cout << letters[i];
    }

    cout << endl;

    return 0;
}