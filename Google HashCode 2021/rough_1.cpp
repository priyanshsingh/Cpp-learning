#include <iostream>
using namespace std;

class FIRST
{
public:
    int num1 = 5;
};

class SECOND
{
private:
    int num2 = 10;
    friend int addFive(FIRST);
};

int add(FIRST d)
{

    int sum = num1 + num2;
    return sum;
}

int main()
{
    SECOND D;
    return 0;
}