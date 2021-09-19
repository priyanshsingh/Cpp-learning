#include <iostream>
using namespace std;

int Search (int arr[], int n, int target)
{
    int left = 0, right = n;
    int iterate = 0;
    int mid;
    while(left <= right)
    {
        iterate = iterate + 1;
        mid = left + ((right-left)/2);
        if(arr[mid] == target)
        {
            cout << "Iterations performed = "<< iterate << endl;
            return mid;
        }
        else if (arr[mid]<target)
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

void Target_location(int arr[], int n, int target){
    int location = 0;
    
    for (int i = 0; i < n; i++)
    {
        location = i;
    }
           
    cout << "The index location of the Target number should be = " << location << endl;

    
}

int main()
{
    int n, target, output;
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
    
    cout << "Enter the target number that is to be searched = ";
    cin >> target;

    output = Search(arr, n, target);

    if(output == -1)
    {
        cout << "Element was not found in the array !" << endl;
        Target_location(arr, n , target);
        
    }
    else
    {
        cout << "Match found at index position "<<output<<endl; 
    }
    return 0;
}