#include <iostream>
using namespace std;

int main()
{
    int myarray[5][5];                                      //Declaration
    int myarray1[2][2] = {1, 2, 3, 4};                      //Declaration and initialization
    int myarrar2[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}; //Declaration and initialization

    for (int i = 0; i < 3; i++) //for loop for row printing
    {
        for (int j = 0; j < 3; j++) //for loop for coloumn printing
        {
            cout << myarrar2[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}