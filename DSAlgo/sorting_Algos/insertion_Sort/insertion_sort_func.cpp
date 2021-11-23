#include <iostream>
using namespace std;

void insertion_sort(int n, int arr[]){
    int temp = 0, j = 0, i = 0;
    for (i = 1; i < n; i++)
    {
        temp = arr[i];
        j = i-1;
        while (j>=0 && arr[j]>temp)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
    }
    cout << "\nARRAY AFTER SORTING:\n";
    for(int k = 0; k<n; k++){
        cout << "Element " << k+1 << " is = " << arr[k] << endl;
    }

}

int main(){
    int n;
    cout << "Enter the size of array = ";
    cin >> n;
    int arr[n];
    cout << "Enter array elements: " << endl;
    for(int i = 0; i<n; i++){
        cout << "Element " << i+1 << " is = ";
        cin >> arr[i];
    }
    cout << "ARRAY IS: " << endl;
    for(int i = 0; i<n; i++){
        cout << "Element " << i+1 << " is = " << arr[i] << endl;
    }
    
    cout << "\n*********************INSERTION SORT************************\n";
    insertion_sort(n, arr);


    return 0;
}