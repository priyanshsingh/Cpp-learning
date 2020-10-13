#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    cout << "Here are somr random numbers = \n";

    srand(0);

    for (int i = 0; i < 10; i++)
    {
        cout << 1 + (rand() % 6) << endl;
    }

    return 0;
}