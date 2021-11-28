#include <iostream>
using namespace std;

class Stack{
    private:
        int top;
        int arr[10];
    public:
        Stack(){
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

        void push(int item)
        {
            if (isFull())
            {
                cout << "Overflow!!!\n";
            }
            else
            {
                cout << "Push Function Called Successfully!!!\n";
                top++;
                arr[top] = item;
            }
        }

        void pop()
        {
            int temp;
            if (isEmpty())
            {
                cout << "UNDRFLOW!!!\n";
            }
            else
            {
                cout << "Pop Function called successfully!!!\n";
                temp = arr[top];
                arr[top] = 0;
                top--;
                cout << "Popped value from the Stack is: " << temp <<endl;
            }
        }

        void peek()
        {
            cout << "Peek Function called successfully!!!\nThe peeked value from the stack is = " << arr[top] << endl;
        }

        void display()
        {
            cout << "Display function called successfully!!!\n";
            for (int j = 9; j >= 0; j--)
            {
                cout << arr[j] << endl;
            }
        }
};


int main(){
    Stack s1;
    int choice, item;

    do
    {
        cout << "Enter values from 1-5. Enter 0 to exit\n";
        cout << "1. Push()\n";
        cout << "2. Pop()\n";
        cout << "3. Peek()\n";
        cout << "4. Display()\n";
        cout << "5. ClearScreen()\n";
        cin >> choice;

        switch (choice)
        {
        case 0:
            break;
        
        case 1:
            cout << "Enter the value that you want to be pushed into the stack = ";
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
            cout << "Enter a valid choice!!!\n";
            break;
        }
    } while (choice!=0);
    return 0;
}