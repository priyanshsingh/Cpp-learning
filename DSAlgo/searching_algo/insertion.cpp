#include<iostream>
using namespace std;

void insertion(int LA[],int n,int k,int value)
{
    if(k <=n )
    {
        int i = 0,j = n;
        n = n + 1;
        while(j >= k)
        {
            LA[j+1] = LA[j];
            j = j-1;
        }
        LA[k] = value;
        cout << "New array is : \n";
        for(i = 0; i < n; i++)
        {
            cout << LA[i] << " ";
        }
    }
    else{
        cout << "Enter correct index value !!!";
    }
}

int main()
{   int n;
    cout << "Enter number of elements to be in array = ";
    cin >> n;
    int LA[n];
    cout << "Enter " << n << " elements in array:\n";
    for(int i=0;i<n;i++)
    {
        cout << "Element number " << i+1 << " = ";
        cin >> LA[i];
    }

    int k;
    cout << "Enter index where new element is to be inserted = ";
    cin >> k;
    
    int value;
    cout << "Enter item value = ";
    cin >> value;

    insertion(LA, n, k, value);
}