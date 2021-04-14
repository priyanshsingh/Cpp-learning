#include <iostream>
using namespace std;

int main()
{
    int arr[10];
    cout << "Enter marks of students out of 100: " << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << "Student " << i + 1 << " = ";
        cin >> arr[i];
    }
    cout << "\nMarks are:\n";
    for (int i = 0; i < 10; i++)
    {
        cout << "Student " << i + 1 << " = " << arr[i] << endl;
    }

    int largest, min, i;
    float average = 0.0;
    largest = arr[0];
    for (i = 1; i < 10; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    cout << "Maximum marks obtained are = " << largest << endl;
    min = arr[0];
    for (i = 1; i < 10; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    cout << "Minimum marks obtained are = " << min << endl;
    for (int i = 0; i < 10; i++)
    {
        average = average + (float)arr[i];
    }
    average = average / 10.00;
    cout << "Average marks are = " << average << endl;

    cout << "Difference from the average marks: ";
    for (int i = 0; i < 10; i++)
    {
        cout << "Difference of Student " << i + 1 << " = " << abs(arr[i] - average) << endl;
    }

    return 0;
}