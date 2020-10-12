#include <iostream>
using namespace std;

int main()
{
    int arr[5];

    for (int i = 0; i < 5; i++)
    {
        cout << "Enter number at " << (i + 1) << " position of the array has = ";
        cin >> arr[i];
    }
    for (int j = 0; j < 5; j++)
    {
        cout << "The " << j << " th index of the array has = " << arr[j] << endl;
    }
    cout << endl;

    return 0;
}