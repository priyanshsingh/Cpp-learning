#include <iostream>
using namespace std;

int Factorial(int n){
    if(n==1)
    {
        return 1;
    }
    int prevFact = Factorial(n-1);
    return n*prevFact;
}

int main(){
    
    int n;
    cout << "Enter a number = ";
    cin >> n;

    cout << "\nResult is = " << Factorial(n) << endl;


    return 0;
}