#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};

    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Enter " << n << " numberes = ";

    for (int i = 0; i < n; i++)
    {
        cin >> arr[n];
    }
    cout << "\n";

    return 0;
}
