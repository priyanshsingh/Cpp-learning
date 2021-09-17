#include <iostream>
using namespace std;

void Ascending(int arr[], int n, int min)
{
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
}

void Descending(int arr[], int n, int min)
{
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
            int temp = arr[min];
            arr[min] = arr[i];
            arr[i] = temp;
        }
    }
    cout << "Array after selection sort is: \n";
    for (int i = 0; i < n; i++)
    {
        cout << "Element no " << i+1 <<" = " << arr[i] << endl;
    }
}


int main()
{
    int n, min, choice;
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
    cout<<"Enter 1 or 2 if you want list to be:\n1. Ascending.\n2. Descending.\n";
    cin >> choice;
    
    switch (choice)
    {
    case 1:
        Ascending(arr, n, min);
        break;
    
    case 2:
        Descending(arr, n, min);
        break;
    
    default:
        cout<<"Enter correct choice";
        break;
    }

    return 0;
}

