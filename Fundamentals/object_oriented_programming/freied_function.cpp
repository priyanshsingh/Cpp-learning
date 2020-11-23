#include <iostream>
using namespace std;

class Distance
{
private:
    int meters;

public:
    Distance()
    {
        meters = 0;
    }
    void display_data()
    {
        cout << "Meters Value = " << meters;
    }
    friend void addValue(Distance &d);
};

void addValue(Distance &d)
{
    d.meters = d.meters + 5;
}

int main()
{
    Distance d1;
    d1.display_data();
    cout << endl
         << endl;
    addValue(d1);
    d1.display_data();

    return 0;
}