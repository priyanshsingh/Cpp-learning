#include <iostream>
using namespace std;

void Insert_at_end(int arr[], int value, int n)
{
    int m = n+1;
    int arr1[m];
    for (int j = 0; j < n; j++)
    {
        arr[j] = arr1[j];
    }
    arr1[n] = value;
    for (int k = 0; k < m; k++)
    {
        cout << "Element " << k+1 << " = " << arr1[k] << endl;
    }
}
void Display(int arr[], int n)
{
    cout << "\nArray is: \n";
    for (int i = 0; i < n; i++)
    {
        cout << "Element " << i+1 << " = " << arr[i] << endl;
    }
}


int main()
{
    int n, lb, ub,choice;
    cout << "Enter the size of array = ";
    cin >> n;
    int arr[n];
    cout << "\nEnter elements in the array: \n";
    for (int i = 0; i < n; i++)
    {
        cout << "Element " << i+1 << " = ";
        cin >> arr[i];
    }

     do
    {
        cout<<"\nWhat operation do you want to perform? Select option number. Enter 0 to exit."<<endl;
        cout << "1. Insert_at_end()"<<endl;
        cout << "2. Display()"<<endl;
        cin >> choice;
        
        switch (choice)
        {
        case 0:
            break;

        case 1:
            int value;
            cout << "Insert the value of to be inserted = ";
            cin >> value;
            Insert_at_end(arr, value, n);
        
        case 2:
            Display(arr, n);

        default:
            cout << "Enter a valid choice!!!";
        }
    } while (choice != 0);


    return 0;
}