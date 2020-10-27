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

    if (result < 10)
        cout << "\nEntered number is between 1 - 10";

    else if (result >= 10 && result < 20)
        cout << "\nEntered number is between 10 - 20";

    else if (result >= 20 && result < 30)
        cout << "\nEntered number is between 20 - 30";

    else if (result >= 30 && result < 40)
        cout << "\nEntered number is between 30 - 40";

    else if (result >= 40 && result < 50)
        cout << "\nEntered number is between 40 - 50";

    else if (result >= 50 && result < 60)
        cout << "\nEntered number is between 50 - 60";

    else if (result >= 60 && result < 70)
        cout << "\nEntered number is between 60 - 70";

    else if (result >= 70 && result < 80)
        cout << "\nEntered number is between 70 - 80";

    else if (result >= 80 && result < 90)
        cout << "\nEntered number is between 80 - 90";

    if (result > 90)
        cout << "\nEntered number is between 90 - 100";

    return 0;
}