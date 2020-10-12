#include <iostream>
using namespace std;

int main()
{
    int A[3];
    int B[3];
    int sub[3];

    cout << "Enter three integers for Array A = ";

    for (int i = 0; i < 3; i++)
    {
        cin >> A[i];
    }
    cout << endl;
    cout << "Enter three integers for Array B = ";

    for (int i = 0; i < 3; i++)
    {
        cin >> B[i];
    }
    cout << endl;
    cout << "Subtraction of Array A and Array B is = ";

    for (int i = 0; i < 3; i++)
    {
        sub[i] = A[i] - B[i];
        cout << sub[i];
    }
    cout << endl;

    return 0;
}