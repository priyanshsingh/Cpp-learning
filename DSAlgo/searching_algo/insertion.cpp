#include<iostream>
using namespace std;
void insertion(int LA[],int n,int k,int item)
{
    int i=0,j=n;
    n=n+1;
    while(j>=k)
    {
        LA[j+1]=LA[j];
        j=j-1;
    }
    LA[k]=item;
    for(i=0;i<n;i++)
    {
        cout<<LA[i]<<" ";
    }
}
int main()
{   int n;
    cin>>n;
    int LA[n];
    for(int i=0;i<n;i++)
    {
        cin>>LA[i];
    }

    int k;
    cin>>k;
    int item;
    cin>>item;
    insertion(LA,n,k,item);
}