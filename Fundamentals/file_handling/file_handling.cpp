#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    char arr[100];
    cout << "\nEnter Your Name and Age = ";
    cin.getline(arr, 100);

    ofstream myfile("file_handling1.txt");
    myfile << arr;
    myfile.close();

    cout << "\nFile Write task completed successfully !!!\n";

    return 0;
}