#include <iostream>
using namespace std;
int main()
{
    int array[5];
    cout << "Enter 5 elements for the array: " << endl;
    for (int j = 0; j < 5; j++)
    {
        cin >> array[j];
    }

    int largest, i, pos;
    largest = array[0];
    for (i = 1; i < 5; i++)
    {
        if (array[i] > largest)
        {
            largest = array[i];
            pos = i;
        }
    }
    cout << "The largest element in the array is " << largest << " and it is at index " << pos;
    return 0;
}