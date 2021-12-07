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
        if(top == 9)
            return true;
        else
            return false;
    }

        bool isEmpty()
        {
            if(top == -1)
                return true;
            else
                return false;
        }

        void push(int item)
        {
            cout << "Operarion called!!!\n";
            if(isFull())
                cout << "Overflow!!!\n\n";
            else
            {
                top++;
                arr[top] = item;
            }
        }

        void pop()
        {
            cout << "Operarion called!!!\n";
            int temp = 0;
            if(isEmpty())
                cout << "Underflow!!!\n\n";
            else
            {
                temp = arr[top];
                arr[top] = 0;
                top--;
                cout << "Popped value is = " << temp << "\n\n";
            }
        }

        void peek(){
            cout << "Operarion called!!!\n";
            cout << "The peek value is = " << arr[top] << "\n\n";
        }

        void display()
        {
            cout << "\n\n";
            cout <<"\n\nDisplay function called successfully!!!\n\n";
            for (int j = 9; j >= 0; j--)
            {
                cout << arr[j] << endl;
            }
            cout << "\n\n";
        }

};


int main(){
    int choice, item;
    Stack s1;
    do
    {
        cout << "STACK DATA STRUCTURE by PRIYANSH\n\n";
        cout << "Enter a choice from below given functions. Enter 0 to exit\n";
        cout << "1. Push" << "\n";
        cout << "2. Pop" << "\n";
        cout << "3. Peek" << "\n";
        cout << "4. Display" << "\n";
        cout << "5. ClearScreen" << "\n";
        cin >> choice;

        switch (choice)
        {
        case 0:
            break;
        
        case 1:
            cout << "Enter a number that want to be pushed into the stack = ";
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
            cout << "Enter a correct choice!!!\n\n";
            break;
        }
    } while (choice!=0);
    


    return 0;
}