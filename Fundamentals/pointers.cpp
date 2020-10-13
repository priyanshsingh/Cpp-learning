#include <iostream>
using namespace std;

int main()
{
    int a = 5;
    int *p;
    p = &a;

    cout << (p) << endl;
    cout << a << endl;
    cout << &a << endl;
    cout << &p << endl;

    return 0;
}