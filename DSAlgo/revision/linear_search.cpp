#include <iostream>
using namespace std;

int linear_search(int arr[], int n, int k){
    for (int i = 0; i < n; i++)
    {
        if (arr[i]==k)
        {
            return i;
        }
    }
    return -1;
}


int main()
{
    int n, k;
    cout << "Enter size of Array : ";
    cin >> n;

    int arr[n];
    cout << "Enter elements for the array: \n";
    for (int i = 0; i < n; i++)
    {
        cout << "Element number " << i+1 << " = ";
        cin >> arr[i];
    }

    cout << "Array is : \n";
    for (int i = 0; i < n; i++)
    {
        cout << i+1 << " = " << arr[i] << "\n";
    }

    cout << "Enter the element that is to be searched: ";
    cin >> k;

    int result = linear_search(arr, n, k);
    if (result == -1)
    {
        cout << "Element was not found in the list";
    }
    else
    {
        cout << "Element was found at the index = "<< result << endl;
    }
    

    return 0;
}