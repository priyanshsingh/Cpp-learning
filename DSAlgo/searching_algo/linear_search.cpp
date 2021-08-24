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

int main()
{
    int n, k;
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

    linearSearch(arr, n, k);
    
    return 0;
}