#include <iostream>
using namespace std;

int binary_Search (int arr[], int n, int k)
{
    int left = 0, right = n;
    int iterate = 0;
    int mid;
    while(left <= right)
    {
        iterate = iterate + 1;
        mid = left + ((right-left)/2);
        if(arr[mid] == k)
        {
            cout << "Iterations performed = "<< iterate << endl;
            return mid;
        }
        else if (arr[mid]<k)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        } 
    }
        return -1;

}

int main()
{
    int n, k, output;
    cout << "Enter the size of array = ";
    cin >> n;
    int arr[n];

    cout << "Enter Numbers in ASCENDING ORDER !!!!" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the value of element number " << i+1 << " = ";
        cin >> arr[i];
    }

    cout << "\nThe entered array is : \n";

    for (int j = 0; j < n; j++)
    {
        cout << "Value of element number " << j+1 << " = " << arr[j] << endl;
    }
    
    cout << "Enter the number to be searched = ";
    cin >> k;

    output = binary_Search(arr, n, k);

    if(output == -1)
    {
        cout << "Element was not found in the array !";
    }
    else
    {
        cout << "Match found at index position "<<output<<endl; 
    }
    return 0;
}