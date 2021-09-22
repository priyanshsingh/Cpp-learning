#include <iostream>
using namespace std;

int binary_search(int arr[], int n, int k){
    int low = 0;
    int high = n-1;
    
    while(low<=high){
        int mid = (low + high)/2;
        if(arr[mid] == k){
            return mid;
        }
        if(arr[mid]<k){
            low = mid+1;
        }
        else{
            high = mid -1;
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

    int searchIndex = binary_search(arr, n, k);
    cout << "The element "<< k <<"was found at index " << searchIndex;
    return 0;
    

    return 0;
}