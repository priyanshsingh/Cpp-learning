#include <iostream>
using namespace std;

int main()
{
    int arr1[] = {1, 2, 1, 1};
    int arr2[] = {1, 2, 1};

    int s1, s2 = 0;

    for (int i = 0; i < (sizeof(arr1) / sizeof(int)); i++)
    {
        s1 = s1 + arr1[i];
    }
    cout << s1 << endl;

    for (int i = 0; i < (sizeof(arr2) / sizeof(int)); i++)
    {
        s2 = s2 + arr2[i];
    }
    cout << s2 << endl;

    if (s1 > s2)
    {
        cout << "Height of Stack 1 is Greater!";

        for (int i = (sizeof(arr1) / sizeof(int)) - 1; i >= 0; i--)
        {
            while (s1 != s2)
            {
                s1 = s1 - arr1[(sizeof(arr1) / sizeof(int)) - i];
                break;
            }
        }
        cout << "\nHeight now = " << s1;
    }
    else if (s1 < s2)
    {
        cout << "Height of Stack 2 is Greater!";
    }
    else
    {
        cout << "Heights are already same!";
    }

    return 0;
}