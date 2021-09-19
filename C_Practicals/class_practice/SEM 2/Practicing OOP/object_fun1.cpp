#include <iostream>
using namespace std;

class Number
{
private:
    int num;

public:
    Number()
    {
    }
    Number(int n)
    {
        num = n;
    }

    void setData(int n)
    {
        num = n;
    }
    void DisplayData()
    {
        cout << "Entered Number is = " << num << endl;
    }
    int getNum()
    {
        return num;
    }
};

Number AddNum(Number n1, Number n2)
{
    int a;
    a = n1.getNum() + n2.getNum();
    Number temp(a);
    return temp;
}

int main()
{
    Number num1, num2, num3;
    cout << endl
         << "Number 1 = ";
    num1.setData(555);
    num1.DisplayData();
    cout << endl
         << "Number 2 = ";
    num2.setData(655);
    num2.DisplayData();

    cout << "Addition of two numbers is: ";
    num3 = AddNum(num1, num2);
    num3.DisplayData();

    cout << endl
         << "Pointer to Object: " << endl;
    Number *ptr;
    ptr = &num3;
    ptr->DisplayData();
    return 0;
}