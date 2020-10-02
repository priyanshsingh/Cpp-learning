#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of rows you want = ";
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        for (int j = n; j > i; j--)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}