#include <iostream>
using namespace std;

int main()
{
    int a = 5;
    int *p;
    p = &a;

    double d = 20.142;
    double *q;
    q = &d;

    cout << p << endl;
    cout << (p + 1) << endl;
    cout << q << endl;
    return 0;
}