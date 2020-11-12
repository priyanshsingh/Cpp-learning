#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    char arr1[100];
    cout << "Enter your Name, Graduation Year and Age = ";
    cin.getline(arr1, 100);

    ofstream newfile("name.txt", ios::app);
    newfile << arr1;
    newfile.close();

    return 0;
}