#include <iostream>
using namespace std;

int main()
{
    cout << "\nThis is a practice program for exception handlinh in C++";
    int a;
    cout << endl
         << "\nEnter any natural number = ";
    cin >> a;

    try
    {
        cout << "This is inside try !!!";

        if (a <= 0)
        {
            cout << "\nInside If of Try!!!";

            throw a;
        }
    }
    catch (int a)
    {
        cout << "\nEnter a valid natural number !!!";
    }

    return 0;
}