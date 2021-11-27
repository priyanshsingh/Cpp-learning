#include <iostream>
using namespace std;


int main(){
    int size;
    int *ptr;

    cout << "Enter the size = ";
    cin >> size;

    ptr = new int[size];
    cout << "Enter values to be stored in the array: " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> ptr[i];
    }

    cout << "\nArray values are: \n";
    for (int j = 0; j < size; j++)
    {
        cout << ptr[j] << endl;
    }
    
    return 0;
}