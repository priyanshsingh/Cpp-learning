#include <iostream>
using namespace std;

class Animal
{
public:
    void MakeSound()
    {
        cout << "Animal Sound" << endl;
    }
};

class Dog : public Animal
{
public:
    void MakeSound()
    {
        cout << "Dogs Bark" << endl;
    }
};

class Cat : public Animal
{
public:
    void MakeSound()
    {
        cout << "Cats Meow" << endl;
    }
};

int main()
{
    Animal a1;
    a1.MakeSound();
    cout << endl;
    Dog d1;
    d1.MakeSound();
    Cat c1;
    c1.MakeSound();
    return 0;
}