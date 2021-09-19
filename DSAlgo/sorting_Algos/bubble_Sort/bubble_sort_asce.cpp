#include <iostream>
using namespace std;

int main()
{
    int i, n;

    cout << "Enter the size of array: ";
    cin >> n;
    cout << "Enter the values for the array : \n";
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Element number " << i+1 << " = ";
        cin >> arr[i];
    }

    cout << "Array is: \n";

    for (int i = 0; i < n; i++)
    {
        cout << "Element number " << i+1 << " = " << arr[i]<<endl;
    }

    cout << "********************BUBBLE SORT***************************\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            if (arr[j+1]<arr[j])
            {
                int temp = arr [j+1];
                arr [j+1] = arr[j];
                arr[j] = temp;
            }
        }
        
    }

    cout << "Array after sorting is: \n";

    for (int i = 0; i < n; i++)
    {
        cout << "Element number " << i+1 << " = " << arr[i]<<endl;
    }
    

    return 0;
}