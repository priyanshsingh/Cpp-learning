#include <iostream>
using namespace std;

int Partition(float arr[], int lb, int ub)
{
    float pivot = arr[lb];
    int start = lb;
    int end = ub;
    while (start < end)
    {
        while (arr[start] <= pivot)
        {
            start++;
        }
        while (arr[end] > pivot)
        {
            end--;
        }
        if(start < end)
        {
            int temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;
        }
    }
    float temp1 = arr[lb];
    arr[lb] = arr[end];
    arr[end] = temp1;
    return end;
}

void QuickSort(float arr[], int lb, int ub)
{
    float location = 0;
    if(lb<ub)
    {
        location = Partition(arr, lb, ub);
        QuickSort(arr, lb, (location-1));
        QuickSort(arr, (location+1), ub);
    }
}

int main()
{
    int n;
    cout << "Enter the size of array = ";
    cin >> n;
    float arr[n];

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

    QuickSort(arr, 0, (n-1));

    cout << "Array after Quick Sort: \n";
    for (int i = n-1; i >= 0; i--)
    {
        cout << "Element no " << n-i <<" = " << arr[i] << endl;
    }    

    return 0;
}