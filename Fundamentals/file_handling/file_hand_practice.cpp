#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int mobile[10];
    cout << "Enter your 10 digit mobile number = ";
    for (int i = 0; i < 10; i++)
    {
        cin >> mobile[i];
    }
 
    ofstream mob("Mobiles.txt", ios::app);
    mob << mobile;
    mob.close();

    cout << "Writing task completed!!!";

    return 0;
}
