#include <iostream>
using namespace std;

class Stack{
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
            if (top == 9)
                return true;
            else
                return false;
        }
        
        bool isEmpty()
        {
            if (top == -1)
                return true;
            else
                return false;
        }

        void push(int item)
        {
            cout << "PUSH Function Called !!!!\n";
            if (isFull())
            {
                cout << "OVERFLOW!!!!\n";
            }
            else
            {
                top++;
                arr[top]=item;   
            }
        }

        void pop()
        {
            cout << "POP Function Called !!!!\n";
            int temp;
            if (isEmpty())
            {
                cout << "UNDERFLOW!!!\n";
            }
            else
            {
                temp = arr[top];
                arr[top] = 0;
                top--;
                cout << "POPPED VALUE = " << temp << endl;
            }
        }

        void peek()
        {
            cout << "PEEK Function Called !!!!\n";
            cout << "PEEKED VALUE IS: " << arr[top] << endl;
        }

        void display()
        {
            cout << "Display function called!!!\n";
            for (int i = 9; i >= 0; i--)
            {
                cout << "ELement " << i+1 << " = " << arr[i] << endl;
            }
        }
};

int main(){
    Stack s1;
    int choice, n;

    do
    {
        cout << "\n************************STACK**************************\n";
        cout << "Enter a suitable number to perform the following operations!!!.\nEnter 0 to exit!!!\n";
        cout << "1. Push()\n";
        cout << "2. Pop()\n";
        cout << "3. Peek()\n";
        cout << "4. Display()\n";
        cout << "5. Clear Screen()\n";
        cin >> choice;

        switch (choice)
        {
        case 0:
            break;
        case 1:
            cout << "Enter the value to be pushed into the stack = ";
            cin >> n;
            s1.push(n);
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
            cout << "Enter correct choice!!!\n";
            break;
        }
    } while (choice!=0);
    
 

    return 0;
}