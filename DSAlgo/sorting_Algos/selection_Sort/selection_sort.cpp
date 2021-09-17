#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of array = ";
    cin >> n;
    int arr[n];
    cout << "Enter the values for the array: \n";
    for (int i = 0; i < n; i++)
    {
        cout << "Element number " << i+1 << " = ";
        cin >> arr[i];
    }
    cout << "Array is : \n";
    for (int i = 0; i < n; i++)
    {
        cout << i+1 << " = " << arr[i] << endl;
    }

    cout << "\n******************************SELECTION SORT ALGO****************************\n";
    for (int i = 0; i < n-1; i++)
    {
        int min = i;
        for (int j = i+1; j < n; j++)
        {
            if(arr[j] < arr[min])
            {
                min = j;
            }
        }
        if(min != i)
        {
            int temp = arr[min];
            arr[min] = arr[i];
            arr[i] = temp;        
        }
    }
    cout << "Sorted Array is : \n";
    for (int i = 0; i < n; i++)
    {
        cout << i+1 << " = " << arr[i] << endl;
    }
    

    
    return 0;
}