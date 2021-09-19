#include <iostream>
using namespace std;

int main()
{
    int arr[7] = {7, 1, 4, 12, 67, 33, 45};
    cout << "\nGiven array is : \n\n";
    for (int i = 0; i < 7; i++)
    {
        cout << "Element " << i + 1 << " = " << arr[i] << endl;
    }

    int count = 1;
    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 6 - i; j++)
        {
            if (arr[j + 1] < arr[j])
            {
                count++;
                int temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
            }
        }
    }
    cout << "\nArray after sort : \n\n";
    for (int i = 0; i < 7; i++)
    {
        cout << "Element " << i + 1 << " = " << arr[i] << endl;
    }
    cout << "\nNumber of Swaps performed = " << count << endl;
    return 0;
}