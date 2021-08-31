#include <iostream>
#include<algorithm>
using namespace std;
void deletion(int LA[],int n,int k)
{
    int i=0,j=n;
    j=k;
    while(j<n)
    {
        LA[j-1]=LA[j];
       j=j+1; 
    }
  n=n-1;
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
    
    deletion(LA,n,k);
}