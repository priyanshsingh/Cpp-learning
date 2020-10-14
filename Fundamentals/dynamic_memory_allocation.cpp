#include <iostream>
using namespace std;

int main()
{
    int size;
    int *p;
    cout << "Enter size of array = \n";
    cin >> size;

    p = new int[size];

    cout << "Enter values to be stored in the array = \n";
    for (int i = 0; i < size; i++)
    {
        cin >> p[i];
    }
    cout << "****************************************\n";

    cout << "Values in the array are = \n";
    for (int i = 0; i < size; i++)
    {
        cout << "\t" << p[i] << endl;
    }

    return 0;
}