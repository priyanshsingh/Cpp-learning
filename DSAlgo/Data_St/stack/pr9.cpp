#include <iostream>
using namespace std;

class Stack
{
    private:
        int top;
        int arr[10];
    public:
        Stack()
        {
            top = -1;
            for (int i = 0; i < 10; i++)
            {
                arr[i] = 0;
            } 
        }

        bool isFull()
        {
            if(top==9)
                return true;
        }
};

int main()
{


    return 0;
}