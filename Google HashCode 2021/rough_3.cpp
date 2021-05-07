#include <iostream>
#include <string>

using namespace std;

class employee
{

public:
    string name;
    int employee_num;

    void setData(string s, int num)
    {

        name = s;
        employee_num = num;
    }

    void putData()
    {

        cout << "name =";
        cout << name << endl;
        cout << "employee's number = ";
        cout << employee_num;
    }
};

int main()
{

    employee arr[3];

    for (int i = 0; i < 3; i++)
    {
        string s;
        int num;

        cout << "name =";
        cin >> s;
        arr[i].setData(s);
        cout << "employee's number = ";
        cin >> num;
        arr[i].setData(num);
    }

    for (int i = 0; i < 3; i++)
    {

        arr[i].putData();
    }

    return 0;
}