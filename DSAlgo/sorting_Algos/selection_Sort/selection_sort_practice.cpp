#include <iostream>
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
    


    return 0;
}