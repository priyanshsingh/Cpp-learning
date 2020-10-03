#include <iostream>
using namespace std;

int main()
{
    char t = 'q';
    char n;

    do
    {
        cout << "\nEnter q to STOP !!!\n";

        cout << "\nEnter a Character = ";

        cin >> n;
    } while (n != t);

    return 0;
}