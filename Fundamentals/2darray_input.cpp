#include <iostream>
using namespace std;

int main()
{
    int myarray[5][5];
    int myarray1[2][2];
    int myarray2[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    cout << "Enter Values for a 2x2 matrix = " << endl;

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {

            cin >> myarray1[i][j];
        }
    }

    cout << "Values for the 2x2 matrix you entered are = " << endl;

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {

            cout << myarray1[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}