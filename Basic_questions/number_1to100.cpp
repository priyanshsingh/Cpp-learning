#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter any number between 1 and 100 (1 and 100 including) = ";
    cin >> n;
    cout << endl;

    if (n >= 1 || n < 10)
    {
        cout << "Number is between 1 and 10";
    }

    else if (n >= 10 || n < 20)
    {
        cout << "Number is between 10 and 20";
    }

    return 0;
}