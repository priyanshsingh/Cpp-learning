#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Please enter a number = ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << i << j << " ";
        }
        cout << endl;
    }
    return 0;
}