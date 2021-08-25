#include <iostream>
using namespace std;

void linearSearch(int arr[], int n, int k)
{
    int found = 0, iterate = 0;
    for(int j = 0; j < n ; j++)
    {
            iterate = iterate + 1;
        if(arr[j] == k)
        {
            found = 1;
            cout << "Element found on the index number = "<< j <<endl <<endl;
            cout << "Number of iterations = "<< iterate <<endl <<endl;
        }
    }
    if(found == 0)
    {
        cout<<"Element was not found in the array!";
    }
}

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
    int n, k, choice, output;
    cout << "Enter the size of array = ";
    cin >> n;

    int arr [n];

    for(int i = 0; i<n; i++)
    {
        cout << "Enter element number " << i+1 << " = ";
        cin >> arr[i];
    }

    cout<<endl;

    for(int i = 0; i<n; i++)
    {
        cout << "Element number " << i+1 << " = " << arr[i] << endl;
    }
    cout<<"Enter the number to be searched = ";
    cin>>k;

    cout << "Enter the method for searching the element(TYPE 1 OR 2) : \n1. LINEAR SEARCH.\n2. BINARY SEARCH.";
    cin >> choice;

    switch (choice)
    {
        case 1: {
                    linearSearch(arr, n, k);
        }
                break;

        case 2: {
             output = binary_Search(arr, n, k);
                if(output == -1){
                    cout << "Element was not found in the array !";
                 }
                else{   
                    cout << "Match found at index position "<<output<<endl;
                }
                break;
        }
        default: {
            cout << "WRONG CHOICE ENTERED !";
        }
                break;

    }

    // if(choice == 1){
    //     linearSearch(arr, n, k);
    // }
    // else if(choice == 2){
    //     output = binary_Search(arr, n, k);
    //     if(output == -1){
    //         cout << "Element was not found in the array !";
    //         }
    //         else{   
    //     cout << "Match found at index position "<<output<<endl;
    //     }
    // }
    // else{
    //     cout << "WRONG CHOICE ENTERED !";
    // }    
    return 0;
}