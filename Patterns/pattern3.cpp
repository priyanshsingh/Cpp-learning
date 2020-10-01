#include <iostream>
using namespace std;

int main()
{
    // int n;
    // cout << "Please enter a number = ";
    // cin >> n;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (j < 4 - i)
            {
                cout << "-";
            }
            else
            {
                cout << "*";
            }
        }
        cout << endl;
    }
    return 0;
}