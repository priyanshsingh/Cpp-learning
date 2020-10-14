#include <iostream>
using namespace std;

int maximum(int x, int y)
{
    if (x > y)
        return x;
    else
        return y;
}
int main()
{
    int a, b;
    cout << "Enter 2 Numbers = ";
    cin >> a >> b;
    int c = maximum(a, b);
    cout << "The greater number of the two is = "
         << c << endl;

    return 0;
}
