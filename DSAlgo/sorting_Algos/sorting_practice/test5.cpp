#include<iostream>
using namespace std;

int main()
{
    int t,a[100],n,p;
    cin >> t;
    while(t--)
    {
        p = 0;
        cin >> n;
        for(int i=0;i<n;i++)
        {
            cin >> a[i];
        }
        if(a[n/2]==7)
        {
            for(int i=0; i<n/2 ;i++)
            {
                if(a[i]!=a[n-1-i])
                {
                    cout << "no\n";
                    break; 
                }
            }
        }
        else
            cout << "no\n";
        if(p==-1)
            cout << "no\n";
        else
            cout << "yes\n";
    }
    return 0;
}