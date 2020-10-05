// C++ program to find out the greater
// of the two integers using terenary conditional.

#include <iostream>
using namespace std;

int main()
{
    int n1, n2, max;
    n1 = 10;
    n2 = 20;
    max = (n1 > n2) ? n1 : n2;
    cout << "The greater number amongst " << n1 << " and " << n2 << " is " << max;

    return 0;
}