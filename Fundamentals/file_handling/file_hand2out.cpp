#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    char arr2[100];
    cout << "This program will print out the data from external memory and print it";

    ifstream myfile("name.txt");
    myfile.getline(arr2, 100);
    cout << "\nThis is the data from the name.txt file = \n\n"
         << arr2 << endl;

    return 0;
}