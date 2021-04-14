#include <iostream>
#include <string>
using namespace std;

class Publication
{
private:
    string title;
    float price;

public:
    Publication()
    {
    }
    void getData(string t, float p)
    {
        title = t;
        price = p;
    }
    void putData()
    {
        cout << "Title is : " << title << endl
             << "Price is: " << price << endl;
    }
};

class Book : public Publication
{
private:
    int page;

public:
    Book()
    {
    }
    void getData(int pg)
    {
        page = pg;
    }
    void putData()
    {
        cout << "Number of pages are: " << page << endl;
        ;
    }
};

class Tape : public Publication
{
private:
    float minutes;

public:
    Tape()
    {
    }
    void getData(float mins)
    {
        minutes = mins;
    }
    void putData()
    {
        cout << "Tape duration in mintes is: " << minutes << endl;
    }
};

int main()
{
    Publication obj1;
    obj1.getData("Harry Potter", 999);
    obj1.putData();

    Book b1;
    b1.getData(487);
    b1.putData();

    Tape t1;
    t1.getData(210);
    t1.putData();
    return 0;
}