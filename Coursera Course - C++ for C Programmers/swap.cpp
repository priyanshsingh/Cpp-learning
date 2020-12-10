#include <iostream>
using namespace std;

inline void swap(int &i, int &j)
{
    int temp = i;
    i = j;
    j = temp;
}

inline void swap_double(double &i, double &j)
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
    swap_double(x, y);
    cout << "\n\nDouble Output: " << x << " & " << y;

    return 0;
}