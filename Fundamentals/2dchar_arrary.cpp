#include <iostream>
using namespace std;

int main()
{
    char myarray[2][2] = {{a, a}, {b, b}};

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << myarray[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}