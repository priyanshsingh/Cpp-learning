#include <iostream>
using namespace std;

int main()
{
    int a = 1, d = 2, n = 9;
    cout << "The " << n << "th term of the AP is = " << a + (n - 1) * d;
    
    float x = n / 2.0, y = a * 2, z = (n - 1);
    cout << x << " " << y << " " << z << endl;
    cout << "\nSum of the AP till the " << n << "th term is = " << x * (y + (z * d));
    return 0;
}