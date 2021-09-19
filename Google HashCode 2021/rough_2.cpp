#include <iostream>

using namespace std;

class operation
{

private:
    float x;
    float y;

public:
    void get()
    {
        cout << "Enter 2 numbers: " << endl;
        cin >> x >> y;
    }

    void disp()
    {
        cout << "Addition is = " << add() << endl;
        cout << "Subtraction is = " << sub() << endl;
        cout << "Modulo is = " << mod() << endl;
        cout << "Multiplication is = " << multi() << endl;
        cout << "Division is = " << divide() << endl;
    }

    inline float add()
    {
        return (x + y);
    }

    inline float sub()
    {
        return (x - y);
    }

    inline float mod()
    {
        return ((int)x % (int)y);
    }

    inline float multi()
    {
        return (x * y);
    }

    inline float divide()
    {
        return (x / y);
    }
};

int main()
{

    operation t;
    t.get();
    t.disp();
    t.multi();

    return 0;
}