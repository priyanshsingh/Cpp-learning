#include <iostream>
using namespace std;

void bubble_sort(int arr[], int n)
{
    int temp;
    int isSorted = 0;
    for (int i = 0; i < n-1; i++)
    {
        cout << "\nWorking on pass number = " << i+1<<endl;
        isSorted = 1;
        for (int j = 0; j < n-i-1; j++)
        {
            if (arr[j]>arr[j+1])
            {
                temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                isSorted = 0;
            }
        }
        if (isSorted)
        {
            return;
        }
        
    }
    cout << "\nArray after BUBBLE SORT is: \n";
    for (int i = 0; i < n; i++)
    {
        cout << "Element number " << i+1 << " = " << arr[i] <<" \n";
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

    bubble_sort(arr, size);

    return 0;
}