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

void MyOutsideFunction(MyBaseClass obj)
{
    cout << "x: " << obj.x << endl;
    obj.PrintProtected();
    obj.PrintPrivate();
}

int main()
{
    MyBaseClass obj1;
    MyOutsideFunction(obj1);
    return 0;
}