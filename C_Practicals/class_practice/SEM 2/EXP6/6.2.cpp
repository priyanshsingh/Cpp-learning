#include <iostream>
using namespace std;
class Test
{
private:
    int number;

public:
    Test()
    {
        number = 0;
    }
    Test(int n)
    {
        number = n;
    }
    void display_Data()
    {
        cout << "Number is: " << number << endl;
    }
    Test operator++()
    {
        ++number;
        return Test(number);
    }
    Test operator++(int)
    {
        Test t(number);
        ++number;
        return t;
    }
};

int main()
{
    Test A1(5), A2(5), A3;

    ++A1;
    A1.display_Data();
    A2++;
    A2.display_Data();

    A3.display_Data();
    A3 = A2++;
    A2.display_Data();
    A3.display_Data();
    return 0;
}
