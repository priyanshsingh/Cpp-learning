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
            else
                return false;
        }

        bool isEmpty()
        {
            if(top==-1)
                return true;
            else
                return false;
        }
        
        void push (int data)
        {
            if(isFull())
                cout << "\n\nOVERFLOW!!!\n\n";
            else
            {
                cout << "\nPush function called!\n";
                top++;
                arr[top] = data;
            }
        }

        void pop()
        {
            if(isEmpty())
                cout << "\n\nUNDERFLOW!!!\n\n";
            else
            {
                cout << "\nPop function called!\n";
                int temp = arr[top];
                arr[top] = 0;
                top--;
                cout << "\nPopped Element is, " << temp << endl;
            }
        }

        void peek()
        {
            cout << "\nPeek Function called successfully!\n";
            cout << "Peek Element is, " << arr[top] << endl;
        }

        void display()
        {
            cout << "Display function called successfully!\n";
            for (int i = 9; i >= 0; i--)
            {
                cout << arr[top] << endl;
            }
        }
};

int main()
{
    Stack s1;
    int item, option;

    do
    {
        cout << "\n\n**************************STACK DATA STRUCTURE**************************\n\n";
        cout << "Enter a choice from below given options!\n";
        cout << "1. Push()" << endl;
        cout << "2. Pop()" << endl;
        cout << "3. Peek()" << endl;
        cout << "4. Display()" << endl;
        cout << "5. ClearScreen()" << endl;
        cin >> option;

        switch (option)
        {
        case 0:
            break;
        
        case 1:
            cout << "Enter the value to be pushed into the Stack = ";
            cin >> item;
            s1.push(item);
            break;
        
        case 2:
            s1.pop();
            break;
        
        case 3:
            s1.peek();
            break;
        
        case 4:
            s1.display();
            break;
        
        case 5:
            system("cls");
            break;
        
        default:
            break;
        }
    } while (option!=0);
    

    return 0;
}