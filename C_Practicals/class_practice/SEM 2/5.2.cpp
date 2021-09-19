#include <iostream>
#include <conio.h>
using namespace std;
class student
{
    int uid;

public:
    void getnumber()
    {
        cout << "Enter UID :";
        cin >> uid;
    }
    void putnumber()
    {
        cout << "\n\nUID :" << uid << "\n";
    }
};
class test : virtual public student
{
public:
    int part1, part2;
    void getmarks()
    {
        cout << "Enter Marks\n";
        cout << "Part1:";
        cin >> part1;
        cout << "Part2:";
        cin >> part2;
    }
    void putmarks()
    {
        cout << "Marks Obtained\n";
        cout << "\nPart1:" << part1;
        cout << "\nPart2:" << part2;
    }
};
class sports : public virtual student
{
public:
    int score;
    void getscore()
    {
        cout << "Enter Sports Score:";
        cin >> score;
    }
    void putscore()
    {
        cout << "\nSports Score is:" << score;
    }
};
class result : public test, public sports
{
    int total;

public:
    void display()
    {
        total = part1 + part2 + score;
        putnumber();
        putmarks();
        putscore();
        cout << "\nTotal Score:" << total;
    }
};
int main()
{
    result obj;
    obj.getnumber();
    obj.getmarks();
    obj.getscore();
    obj.display();
    return 0;
}
