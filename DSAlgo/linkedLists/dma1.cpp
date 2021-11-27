#include <iostream>
using namespace std;


int main(){
    int n;
    int *arr;

    cout << "Enter the size of array: ";
    cin >> n;

    arr = new int[n];

    cout << "Enter array values: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "ARRAY Values are: \n";
    for (int j = 0; j < n; j++)
    {
        cout << "Element " << j + 1 << " = " << arr[j] << endl; 
    }

    return 0;
}