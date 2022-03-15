#include <iostream>
using namespace std;


int main(){
    cout << "Enter the size of array = ";
    int n;
    cin >> n;
    int arr[n];

    cout << "\nEnter the elements for the array: \n";
    for(int i = 0; i < n; i++){
        cout << "Element " << i+1 << " is = ";
        cin >> arr[i];
    }
    cout << "\nArray Elements are: \n";
    for(int i = 0; i < n; i++){
        cout << "Element " << i+1 << " is = " << arr[i] << endl;
    }

    cout << "\n\n************************BUBBLE SORT*****************************\n";
    int flag = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            int temp = 0;
            temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
            flag = 1;
        }
        if (flag == 0)
        {
            break;
        }
        
    }
    cout << "\nArray after getting sorted: \n";
    for(int i = 0; i < n; i++){
        cout << "Element " << i+1 << " is = " << arr[i] << endl;
    }

    return 0;
}