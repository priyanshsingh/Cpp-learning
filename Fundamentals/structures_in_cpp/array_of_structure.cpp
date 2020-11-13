#include <iostream>
#include <string>
using namespace std;

struct Person
{
    string name;
    int age;
    double salary;
};

int main()
{
    Person p[2];
    for (int i = 0; i < 2; i++)
    {
        cout << "Enter person " << i + 1 << " details like Name, Age and Salary = ";
        cin >> p[i].name;
        cin >> p[i].age;
        cin >> p[i].salary;
        cout << "\n********************************************************************************************************\n";
    }

    for (int i = 0; i < 2; i++)
    {
        cout << "Details of user " << i + 1 << " are : \n";
        cout << "Name is : " << p[i].name << endl;
        cout << "Age is : " << p[i].age << endl;
        cout << "Salary is : " << p[i].salary << endl;
        cout << "*********************************************************************************************************\n";
    }
    return 0;
}