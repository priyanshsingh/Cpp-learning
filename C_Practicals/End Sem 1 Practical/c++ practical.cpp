#include<iostream>
using namespace std;

inline int MAX(int a,int b, int c)
{
    if(a>b && a>c)
    return a;
    else if(b>c)
    return b;
    else return c;
}
inline int MIN(int a,int b, int c)
{
    if(a<b && a<c)
    return a;
    else if(b<c)
    return b;
    else return c;
}
int main()
{
    int a,b,c;
    cout<<"Enter three numbers : "; 
    cin>>a>>b>>c;
    cout<<"MAX out of the three : "<<MAX(a,b,c)<<endl;
    cout<<"MIN out of the three : "<<MIN(a,b,c)<<endl;
    
    return 0;
}
