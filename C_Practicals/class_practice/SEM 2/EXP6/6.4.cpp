#include <iostream>
#include <cstring>
using namespace std;
class Pair
{
private:
    char num[20];

public:
    friend ostream &operator<<(ostream &output, const Pair &p)
    {

        output << p.num;

        return output;
    }

    friend istream &operator>>(istream &input, Pair &p)
    {

        char pairs[20];

        input >> pairs;

        int len = strlen(pairs);

        if (len < 5 || pairs[0] != '(' || pairs[len - 1] != ')' || !strstr(pairs, ","))
        {

            cout << "Invalid pair value found!" << endl;

            strcpy(p.num, "");
        }

        else
        {

            strcpy(p.num, pairs);
        }

        return input;
    }
};

int main()
{

    Pair p;

    cout << "Enter the value of pair object: ";

    cin >> p;

    cout << "Entered pair value is: " << p << endl;

    return 0;
}