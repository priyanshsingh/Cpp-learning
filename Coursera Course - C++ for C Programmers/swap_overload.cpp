//C++ has the feature of function overloading so, we can use the same name of two or more functions.

#include <iostream>
using namespace std;

inline void swap(int &i, int &j)
{
    int temp = i;
    i = j;
    j = temp;
}

inline void swap(double &i, double &j)
{
    double temp = i;
    i = j;
    j = temp;
}

int main()
{
    int m = 5, n = 10;
    cout << "\nInput: " << m << " & " << n;
    swap(m, n);
    cout << "\nOutput: " << m << " & " << n;

    double x = 5.6, y = 10.8;
    cout << "\n\nDouble Input: " << x << " & " << y;
    swap(x, y);
    cout << "\n\nDouble Output: " << x << " & " << y;

    return 0;
}