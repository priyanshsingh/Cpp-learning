#include <bits/stdc++.h>
using namespace std;


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
    sort(arr, arr+n);
    cout << "ARRAY IS: " << endl;
    for(int i = 0; i<n; i++){
        cout << "Element " << i+1 << " is = " << arr[i] << endl;
    }
    if(n%2==0)
        cout << arr[(n/2)-1];
    else
        cout << arr[n/2];

    return 0;
}