#include"bits/stdc++.h"
using namespace std;


 void  delete_element(int arr[],int size,int pos)
 {
    for( int i = pos-1; i < size; i++) 
     {

      arr[i] = arr[i+1];
     }

   size--;          
    cout<<"MODIFIED ARRAY";
    for(int j = 0; j < size; j++) 
    {
        
         cout<<"   "<<arr[j];
    }  

    cout<<endl;
 }

void findpos(int arr[],int size,int ele)
{
    int x=ele;
    int count=0;
    for(int i=0;i<size;i++)
    {
        if(arr[i]==x)
        {
            cout<<"ELEMENT FOUND AT POSITION="<<i+1<<endl;
            count++;
            return;
        }
    }

    if(count==0)
    {
        cout<<"ELEMENT NOT PRESENT"<<endl;
    }
}

int main()
{
    int arr[100];
    int size, pos, choice;

    cout << "***************PRIYANSH_SINGH-20BCS5967*********************\n";
    cout<<"ENTER SIZE OF AN ARRAY: ";
    cin>>size;
    cout<<"ENTER THE ELEMENTS"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
       
    }

    cout << "Enter a choice(1 or 2).\n1. DELETE ELEMENT\n2. SEARCH ELEMENT\n";
    cin >> choice;
    switch (choice)
    {
    case 0:
        break;
    
    case 1:
        cout<<"ENTER THE POSITION TO DELETE: ";
        cin>>pos;
        delete_element(arr,size,pos);
        break;
    case 2:
        int ele;
        cout<<"ENTER THE ELEMENT TO FIND ITS POSITION: ";
        cin>>ele;
        findpos(arr,size,ele);
        break;
    default:
        cout << "Enter a valid choice!!!\n";
        break;
    }

    

}