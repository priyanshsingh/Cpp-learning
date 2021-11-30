#include <iostream>
using namespace std;

long Power(int n, int p){
    if(p==0)
    {
        return 1;
    }
    long prevPower = Power(n, p-1);
    return n*prevPower;
}

int main(){
    
    int n, p;
    cout << "Enter a number = ";
    cin >> n;
    cout << "Enter its power = ";
    cin >> p;

    cout << "\nResult is = " << Power(n, p) << endl;


    return 0;
}