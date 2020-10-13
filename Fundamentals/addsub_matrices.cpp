#include <iostream>
using namespace std;

int main()
{
    int m, n;

    cout << "Enter number of rows for matrix = ";
    cin >> m;
    cout << "Enter number of coloumns for matrix = ";
    cin >> n;

    int matrix1[m][n];
    cout << "Enter a matrix 1 of order " << m << " x " << n << " = ";

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> matrix1[i][j];
        }
    }

    cout << endl;

    int matrix2[m][n];

    cout << "Enter a matrix 2 of order " << m << " x " << n << " = ";

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> matrix2[i][j];
        }
    }

    cout << endl;

    char x;
    cout << "Do you want to add or subtract the matrices ? +/- = ";
    cin >> x;

    if (x == '+')
    {

        cout << "Addition of matrix 1 and matrix 2 of order " << m << " x " << n << " is = " << endl;

        int add[m][n];

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                add[i][j] = matrix1[i][j] + matrix2[i][j];
            }
        }

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << add[i][j] << " ";
            }
            cout << endl;
        }
    }

    else if (x == '-')

    {

        cout << "Subtraction of matrix 1 and matrix 2 of order " << m << " x " << n << " is = " << endl;

        int sub[m][n];

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                sub[i][j] = matrix1[i][j] - matrix2[i][j];
            }
        }

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << sub[i][j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}