#include <iostream>
using namespace std;

int add(int w, int x, int y = 0, int z = 5)
{
    return (w + x + y + z);
}
int main()
{
    cout << "The addition of 1, 2, 3, 4 is = " << add(1, 2, 3, 4) << endl;

    cout << "The addition of 1, 2, 0, 5 is = " << add(1, 2) << endl;

    return 0;
}