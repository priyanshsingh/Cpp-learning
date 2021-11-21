#include <iostream>
using namespace std;

void bubble_sort(int n, int arr[]){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            if (arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }   
        }
    }
    cout << "Array after sorting: \n";
    for (int k = 0; k < n; k++)
    {
        cout << "Element " << k+1 << " = " << arr[k] << endl;
    }
}

int main(){
    int i, n;
    cout << "Enter the size of array = ";
    cin >> n;
    int arr[n];
    cout << "Enter the values for the array: \n";
    for (int i = 0; i < n; i++)
    {
        cout << "Element " << i+1 << " = ";
        cin >> arr[i];
    }
    cout << "Array is:\n";
    for (int i = 0; i < n; i++)
    {
        cout << "Element " << i+1 << " is = " << arr[i] << endl;
    }

    cout << "********************BUBBLE SORT***************************\n";
    
    bubble_sort(n, arr);
    

    return 0;
}