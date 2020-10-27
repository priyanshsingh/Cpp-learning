#include <iostream>
using namespace std;

int main()
{
    int n, result;
    cout << "Enter any number between 1 and 100 (1 and 100 including) = ";
    cin >> n;
    cout << endl;

    for (int i = 0; i <= n; i++)
    {
        result = i;
    }
    cout << "Entered number is = " << result;

    return 0;
}