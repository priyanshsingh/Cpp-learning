#include <iostream>
using namespace std;

void merge(int arr[], int lb, int mid, int ub)
{
    int i = lb;
    int j = mid + 1;
    int k = lb;

    int size = (ub-1)+lb;
    int res[size];

    while (i<=mid && j<=ub)
    {
        if(arr[i] <= arr[j])
        {
            res[k] = arr[i];
            i++;
            k++;
        }
        else{
            res[k] = arr[j];
            j++;
            k++;
        }
    }
    while (i <= mid)
        {
            res[k] = arr[i];
            i++;
            k++;
        }

    while (j <= ub)
        {
            res[k] = arr[j];
            j++;
            k++;
        }
    for (int s = lb; s <= ub; s++)
    {
        arr[s] = res[s];
    }
}

void mergeSort(int arr[], int lb, int ub)
{
    if (lb < ub)
    {
        int mid = (lb + ub)/2;
        mergeSort(arr, lb, mid);
        mergeSort(arr, (mid+1), ub);
        merge(arr, lb, mid, ub);
    }
}

int main()
{
    int lb, ub, n;
    cout << "\nEnter the number of elements to be stored in the array = ";
    cin >> n;
    int arr[n];

    cout << "\nEnter the elements for the array: ";
    for (int i = 0; i < n; i++)
    {
        cout << "Element " << i+1 << " = ";
        cin >> arr[i];
    }
    cout << "\nEntered array is: \n";
    for (int i = 0; i < n; i++)
    {
        cout << "Element " << i+1 << " = " << arr[i] << endl;
    }
    lb = 0;
    ub = n-1;

    mergeSort(arr, 0, (n-1));

    cout << "\nAfter MERGE SORT: \n";
    for (int i = (n-1); i >= 0; i--)
    {
        cout << "Element " << n-i << " = " << arr[i] << endl;
    }
    
    return 0;
}