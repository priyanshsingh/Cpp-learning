#include <iostream>
using namespace std;

int main()
{
    int n, min, temp;
    cout << "Enter the size of array = ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements for the array: \n";
    for (int i = 0; i < n; i++)
    {
        cout << "Element no " << i+1 <<" = ";
        cin >> arr[i];
    }

    cout << "Array is: \n";
    for (int i = 0; i < n; i++)
    {
        cout << "Element no " << i+1 <<" = " << arr[i] << endl;
    }

    for (int i = 0; i < n-1; i++)
    {
        min = i;
        for (int j = i+1; j < n; j++)
        {
            if (arr[min] < arr[j])
            {
                min = j;
            }
        }
        if (min!=i)
        {
            temp = arr[min];
            arr[min] = arr[i];
            arr[i] = temp;
        }
    }
    cout << "Array after selection sort is: \n";
    for (int i = 0; i < n; i++)
    {
        cout << "Element no " << i+1 <<" = " << arr[i] << endl;
    }
    return 0;
}