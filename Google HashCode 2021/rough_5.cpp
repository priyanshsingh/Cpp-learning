#include <iostream>

using namespace std;

class sample
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
        cout << "Multiplication is = " << multi() << endl;
        cout << "Division is = " << divide() << endl;
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

    sample t;
    t.get();
    t.disp();
    t.multi();

    return 0;
}
