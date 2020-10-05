#include <iostream>
using namespace std;

int main()
{

    int arr[5] = {1, 2, 3, 4, 5};

    double arr1[2];
    arr1[0] = 31.1234;
    arr1[1] = 12.2314;

    char letters[5];
    letters[0] = 'V';
    letters[1] = 'a';
    letters[2] = 'r';
    letters[3] = 'u';
    letters[4] = 'n';

    cout << "The Name is = ";

    for (int i = 0; i < 5; i++)
    {
        cout << letters[i];
    }

    return 0;
}