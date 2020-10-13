#include <iostream>
using namespace std;

int main()
{

    // int a = 0;
    // char x = a;
    // cout << x;
    char x[255];

    for (int i = 0; i <= 255; i++)
    {
        x[i] = i;
    }

    for (int j = 0; j <= 255; j++)
    {
        cout << j << ". " << x[j] << "\n    ";
    }
    cout << endl;

    return 0;
}