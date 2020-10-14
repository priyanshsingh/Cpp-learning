#include <iostream>
using namespace std;

inline add(int x, int y)
{
    return (x + y);
}

int main()
{
    cout << "Addition of 5 and 6 = " << add(5, 6) << endl;
    return 0;
}