#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    char arr[100];
    cout << "\nEnter Your Name and Age = ";
    cin.getline(arr, 100);

    fstream myfile("file_handling1.txt", ios::out | ios::app);
    myfile << arr;
    myfile.close();

    cout << "\nFile Write task completed successfully !!!\n";

    cout << "\nFile Read task Initiated !!!\n";

    char arr1[100];
    ifstream newfile("file_handling1.txt");
    newfile.getline(arr1, 100);

    cout << "Array contain = " << arr1 << endl;
    cout << "\nFile Read task completed successfully !!!\n";

    return 0;
}