#include <iostream>
using namespace std;

void linearSearch(int arr[], int n, int k)
{
    int found = 0;
    for(int j = 0; j < n ; j++)
    {
        if(arr[j] == k)
        {
            found = 1;
            cout << "Successfully, element was found on the index number = "<< j <<endl <<endl;
        }
    }
    if(found == 0)
    {
        cout<<"Unsuccessfully, element was not found in the array!!!\n";
    }
}

int main()
{
    int n, k, choice;
    cout << "***************PRIYANSH_SINGH-20BCS5967*********************\n";
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
    

    cout << "Do you want to perform linear search? Enter 1 to continue and 0 to exit.\n";
    cin >> choice;
    if(choice==1){
        cout<<"Enter the number to be searched = ";
        cin>>k;
        linearSearch(arr, n, k);
    }  
    else{
        cout << "End of Program!\n";
    }  
    
    return 0;
}