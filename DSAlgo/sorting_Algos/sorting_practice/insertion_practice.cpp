#include <iostream>
using namespace std;

void insertion_sort(int arr[], int n)
{
    int key, j;
    for (int i = 0; i < n; i++)
    {
        key = arr[i];
        j = i-1;
        while (j>=0 && arr[j] > key)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1]=key;
    }
    cout << "\nArray after INSERTION SORT is: \n";
    for (int i = 0; i < n; i++)
    {
        cout << "Element number " << i+1 << " = " << arr[i] << endl;
    }
    
}

int main()
{
    int size;
    cout << "Enter size of array = ";
    cin >> size;
    int arr[size];
    
    cout << "Enter Array Elements: \n";
    for (int i = 0; i < size; i++)
    {
        cout << "Enter Element number " << i+1 << " = ";
        cin >> arr[i];
    }
    
    cout << "\nArray is: \n";
    for (int i = 0; i < size; i++)
    {
        cout << "Element number " << i+1 << " = " << arr[i] <<" \n";
    }

    insertion_sort(arr, size);

    return 0;
}