#include <iostream>
using namespace std;

int sum(int x)
{
    if (x != 0)
    {
        int a = x + sum(x - 1);
        return a;
    }
    else
    {
        return x;
    }
}

int main()
{
    int n;
    cout << "Enter a number upto which you want them to be added = ";
    cin >> n;
    int add = sum(n);

    cout << "Sum of the numbers from 1 to " << n << " is = " << add;

    return 0;
}