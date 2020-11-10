//Create a structure named - Name, Age and Salary.

#include <iostream>
using namespace std;

struct person
{
    char name[100];
    int age;
    double salary;
};

int main()
{
    person p1;
    cout << "Enter person details :" << endl
         << "Enter Person Name = ";
    cin.getline(p1.name, 100);

    cout << "Enter Age = ";
    cin >> p1.age;

    cout << "Enter Salary = ";
    cin >> p1.salary;

    cout << endl
         << "Person details are as follows:" << endl;

    cout << "Person Name : " << p1.name << endl;
    cout << "Person Age : " << p1.age << endl;
    cout << "Person Salary : " << p1.salary << endl;

    return 0;
}