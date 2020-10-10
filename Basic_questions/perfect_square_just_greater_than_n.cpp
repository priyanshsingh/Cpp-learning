#include <iostream>
using namespace std;

int main()
{
    int n, x;
    int i;
    cout << "Enter a number = ";
    cin >> n;
    cout << "\n";

    do
    {
        x = i * i;
        i++;
    } while (x < n);

    cout << "\nPerfect square just less than the entered number is = ";
    cout << x;

    return 0;
}