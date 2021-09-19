#include <iostream>
using namespace std;

 
void sortarray (int a[], int n) 
{
    for (int p = 1; p <= n; p++)
    {
        for (int j = 0; j < n - p; j++)	
    	{ 
            int t;
            if (a[j] > a[j + 1])  
            {
                t = a[j]; 
                a[j] = a[j + 1]; 
                a[j + 1] = t;
            }
        }   
    }
}


int binarysearch (int a[], int n, int t) 
{
    
    int l = 0, h = n - 1, mid;
    
    while (l <= h)        
    {
        mid = (l + h) / 2;        
        if (t == a[mid])
        return mid;
            
        if (t < a[mid])
        h = mid - 1;
            
        else
        l = mid + 1;    
    }
    
    return h + 1;

}


void insert (int a[], int n, int t) 
{
    int k = binarysearch (a, n, t);    
    int i = 0;
    int j = n;
    n = n + 1;
    while (j >= k)
    {    
        a[j + 1] = a[j];    
        j = j - 1;    
    }
    a[k] = t;
    for (int i = 0; i < n; i++)        
    {
        cout << a[i] << " ";
    } 
} 

int delete_val (int a[], int n, int k) 
{
    
    int r = binarysearch (a, n, k); 
    if (r == -1)    
    {
        cout << "Element not found";
        return n;
    }
    
    int i;
    for (i = r; i < n - 1; i++)
    a[i] = a[i + 1];
    
    return n - 1;
}


int main () 
{  
    int n, t, k;
    cout << "Enter number of elements for the array = ";    
    cin >> n;
    
    int a[n];
    
    cout << "Enter array elements: \n";    
    for (int i = 0; i < n; i++)
    {
        cout << "Element number " << i+1 << " = ";
        cin >> a[i];
    } 
    sortarray (a, n);
    int choice;
    
    cout << "Type 1 for insertion operation or 2 for deletion of an element = ";
    cin >> choice;
    
    if (choice == 1)
    {        
        cout << "Enter the element you want to insert = ";       
        cin >> t;
        insert (a, n, t);
    }
    
    else if (choice == 2)
    {    
        cout << "Enter the element you want to be deleted = ";
        cin >> k;
        int p = delete_val (a, n, k);
            
        for (int i = 0; i < p; i++)
        {
            cout << a[i] << " ";    
        } 
    }

    else
    {
        cout << "Enter a correct choice!!!";
    }

}
