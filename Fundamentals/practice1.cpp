#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    cout << "\nThe entered numbers are = \n";

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i];
        cout << "\n";
    }

    return 0;
}