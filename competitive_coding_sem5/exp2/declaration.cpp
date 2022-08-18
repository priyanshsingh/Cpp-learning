#include <iostream>
#include <stack>
using namespace std;


int main(){
    stack <int> st1;
    st1.push(25);
    st1.push(30);
    st1.push(40);
    st1.push(50);
    st1.push(60);

    st1.pop();
    
    while (!st1.empty())
    {
        cout << st1.top() << endl;
        st1.pop();
    }
    

    return 0;
}