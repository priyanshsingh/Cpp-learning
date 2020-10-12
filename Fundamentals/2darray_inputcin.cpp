#include <iostream>
using namespace std;

int main()
{
    int m, n;
    cout << "Enter the number of rows = ";
    cin >> m;
    cout << "Enter the number of coloumns = ";
    cin >> n;

    int myarray1[m][n];

    cout << "Enter Values for a " << m << " x " << n << " matrix = " << endl;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {

            cin >> myarray1[i][j];
        }
    }

    cout << "Values for the 2x2 matrix you entered are = " << endl;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {

            cout << myarray1[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    return 0;
}