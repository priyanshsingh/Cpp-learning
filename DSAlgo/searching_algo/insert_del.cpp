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
            cout << LA[i] << "\n";
        }
    }
    else{
        cout << "Enter correct index value !!!";
    }
}

void deletion(int LA[],int n,int k)
{
    if(k <= n)
    {
        int i = 0,j = n;
        j = k;
        while(j < n)
        {
            LA[j-1] = LA[j];
        j = j + 1; 
        }
        
        n = n - 1;
        for(i = 0; i < n; i++)
        {
            cout << LA[i] <<"\n";
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

    int k, value, choice;

    cout << "Which operation you want to perform?\n1. Insertion\n2. Deletion\n(type 1 or 2 for choice.)\n";
    cin >> choice;
    switch (choice)
    {
        case 1: {
            cout << "Enter index where new element is to be inserted = ";
            cin >> k;
            cout << "Enter item value = ";
            cin >> value;
            insertion(LA, n, k, value);

        }
            break;

        case 2: {
            cout << "Enter index where new element is to be inserted = ";
            cin >> k;
            deletion(LA,n,k);

        }
            break;

        default: {
            cout << "WRONG CHOICE ENTERED!";
        }
            break;

    }
}