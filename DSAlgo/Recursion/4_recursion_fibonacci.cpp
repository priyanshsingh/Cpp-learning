#include <iostream>
using namespace std;

long fibonacci(int n){
    if(n==0||n==1)
    {
        return n;
    }
    return fibonacci(n-1)+fibonacci(n-2);
}

int main(){
    
    int n, p;
    cout << "Enter a number = ";
    cin >> n;

    cout << "\nResult is = " << fibonacci(n) << endl;


    return 0;
}