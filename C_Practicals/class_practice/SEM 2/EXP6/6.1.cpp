#include <iostream>
using namespace std;

int cube_vol(int x)
{
    return x * x * x;
}
float cube_vol(float y)
{
    return y * y * y;
}
int main()
{
    int a = 10;
    float b = 3.5;
    cout << "Cube of Edge as an Integer number " << a << " has volume = " << cube_vol(a) << endl;
    cout << "Cube of Edge as a Float number " << b << " is " << cube_vol(b) << endl;
    return 0;
}
