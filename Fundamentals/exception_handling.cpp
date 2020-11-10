#include <iostream>
using namespace std;

int main()
{
    int res, num, den;
    cout << "Enter Numerator and Denomenator = " << endl;
    cin >> num >> den;

    try
    {
        if (den == 0)
        {
            throw den;
        }
        res = num / den; //exception will occur here
    }
    catch (int ex)
    {
        cout << "Divide by zero is not allowed, its an exception !!!";
    }

    cout << "Division is = " << res;

    return 0;
}