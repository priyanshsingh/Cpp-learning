#include <iostream>
using namespace std;

int main()
{
    int m, n, p, q;
    cout << "1. Enter the number of rows = ";
    cin >> m;
    cout << "1. Enter the number of coloumns = ";
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

    cout << endl;

    cout << "2. Enter the number of rows = ";
    cin >> p;
    cout << "2. Enter the number of coloumns = ";
    cin >> q;

    int myarray2[p][q];

    cout << "Enter Values for a " << p << " x " << q << " matrix = " << endl;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> myarray2[i][j];
        }
    }

    cout << endl;

    
    return 0;
}
