#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Of how many numbers does your contact number consists of = ";
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter " << (i + 1) << " digit of you contact number = ";
        cin >> arr[i];
    }

    cout << "Your contact number is = ";

    for (int j = 0; j < n; j++)
    {
        cout << arr[j];
    }
    cout << endl;

    return 0;
}