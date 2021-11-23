#include <iostream>
using namespace std;


int main(){
    int n;
    cout << "Enter the size of array = ";
    cin >> n;

    int arr[n];
    cout << "Enter array elements: \n";
    for(int i = 0; i<n; i++){
        cout << "Element " << i+1 << " is = ";
        cin >> arr[i];
    }
    cout << "\nARRAY IS: " << endl;
    for(int i = 0; i<n; i++){
        cout << "Element " << i+1 << " is = " << arr[i] << endl;
    }

    cout << "\n************************INSERTION SORT************************\n";
    for (int i = 1; i < n; i++)
    {
        int temp = arr[i];
        int j = i-1;
        while (j>=0 && arr[j]>temp)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
    }

    cout << "\nARRAY AFTER SORTING:\n";
    for(int i = 0; i<n; i++){
        cout << "Element " << i+1 << " is = " << arr[i] << endl;
    }

    return 0;
}