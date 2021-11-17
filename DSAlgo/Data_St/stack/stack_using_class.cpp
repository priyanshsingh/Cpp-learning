#include <iostream>
using namespace std;

class Stack{
    private:
        int top;
        int stack_arr[10];
    public:
        Stack()
        {
            top = -1;
            for (int i = 0; i < 10; i++)
            {
                stack_arr[i] = 0;
            }
        }

        bool isFull()
        {
            if (top == 9)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        bool isEmpty()
        {
            if (top == -1)
            {
                return true;
            }
            else
            {
                return false;
            }
        }

        void push(int item)
        {
            if (isFull())
            {
                cout << "OVERFLOW!!!\n";
            }
            else
            {
                top++;
                stack_arr[top] = item;
                cout << "Item pushed successfully!\n";
            }
        }

        void pop()
        {
            if (isEmpty())
            {
                cout << "UNDERFLOW!!!\n";
            }
            else
            {
                int temp;
                temp = stack_arr[top];
                top--;
                cout << "POPPED ITEM IS = " << temp << endl;
            }
        }

        void peek()
        {
           if (isEmpty())
            {
                cout << "UNDERFLOW!!!\n";
            }
            else
            {
                cout << "PEEKED item is = " << stack_arr[top] << endl;
            } 
        }

        void display()
        {
           if (isEmpty())
            {
                cout << "UNDERFLOW!!!\n";
            }
            else
            {
                cout << "STACK ITEMS ARE: \n";
                for (int i = 9; i >= 0; i--)
                {
                    cout << stack_arr[i] << endl; 
                }
            }  
        }
};


int main(){

    Stack s1;
    int choice, item;

    cout << "Implementation of Stack using ARRAYS!!!" << endl;
    cout << "Enter a choice from 1 to 4. Enter 0 to exit:\n";
    cout << "1. PUSH\n2. POP\n3. PEEK\n4. DISPLAY\n";
    cin >> choice;

    do
    {
        switch (choice)
        {
        case 0:
            
            break;
        case 1:
            cout << "PUSH function called!!!\nEnter item to be pushed = ";
            cin >> item;
            s1.push(item);
            break;
        case 2:
            cout << "POP function called!!!\n";
            s1.pop();
            break;
        case 3:
            cout << "PEEK function called!!!\n";
            s1.peek();
            break;
        case 4:
            cout << "DISPLAY function called!!!\n";
            s1.display();
            break;
    
        default:
            cout << "Enter valid choice!!!\n";
            break;
        }
    } while (choice!=0);


    return 0;
}