#include <iostream>
using namespace std;

class MyBaseClass
{
public:
    int x;
    MyBaseClass()
    {
        x = 1;
        y = 2;
        z = 3;
    }
    void PrintProtected()
    {
        cout << "y: " << y << endl;
    }
    void PrintPrivate()
    {
        cout << "z: " << z << endl;
    }

protected:
    int y;

private:
    int z;
};

class MyDerivedClass : public MyBaseClass
{
};

void MyOutsideFunction(MyBaseClass obj)
{
    cout << "x: " << obj.x << endl;
    obj.PrintProtected();
    obj.PrintPrivate();
}

int main()
{
    MyBaseClass obj1;
    MyDerivedClass obj2;
    cout << "X = " << obj2.x;

    return 0;
}