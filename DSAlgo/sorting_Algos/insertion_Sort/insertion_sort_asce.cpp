#include <iostream>
using namespace std;

int main()
{
    int n, key, i, j;
    cout << "Enter the size of array = ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements for the array: \n";
    for (int x = 0; x < n; x++)
    {
        cout << "Element no " << x+1 <<" = ";
        cin >> arr[x];
    }
    cout << "Array is: \n";
    for (int x = 0; x < n; x++)
    {
        cout << "Element no " << x+1 <<" = " << arr[x] << endl;
    }

    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i-1;
        while (j >=0 && arr[j] > key)
        {
            arr[j+1] = arr[j];
            j = j-1;
        }
        arr[j+1] = key;
    }
    cout << "Array after insertion sort is: \n";
    for (int i = 0; i < n; i++)
    {
        cout << "Element no " << i+1 <<" = " << arr[i] << endl;
    }


    return 0;
}