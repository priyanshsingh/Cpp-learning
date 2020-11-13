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
    Person p1;
    cout << "Enter Details of person as Name, Age and Salary = ";
    cin >> p1.name;
    cin >> p1.age;
    cin >> p1.salary;

    cout << "\nDetails of person as Name, Age and Salary are = ";
    cout << "Name is = " << p1.name << endl;
    cout << "Age is = " << p1.age << endl;
    cout << "Salary is = " << p1.salary << endl;

    return 0;
}