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
        bool isEmpty()
        {
            if(top==-1)
                return true;
            else
                return false;
        }

        bool isFull()
        {
            if(top==9)
                return true;
            else
                return false;
        }

        void push(int data)
        {
            if (isFull())
            {
                cout << "Stack OVERFLOW!!!" << endl;
            }
            else
            {
                cout << "Push function called!" << endl;
                top++;
                arr[top] = data;
            }
        }

        void pop()
        {
            if(isEmpty())
            {
                cout << "Stack UNDERFLOW!" << endl;
            }
            else
            {
                int temp = arr[top];
                arr[top] = 0;
                top--;  
                cout << "Pop function called!" << endl;
                cout << "The popped value is = " << temp << endl;
            }
        }
        void peek()
        {
            if (isEmpty())
            {
                cout << "The stack is empty!" << endl;
            }
            else
            {
                cout << "Peek operation called!" << endl;
                cout << "The peeked value is = " << arr[top] << endl;
            }
        }

        void display()
        {
            cout << "Display function called successfully!\n";
            for (int i = 9; i >= 0; i--)
            {
                cout << arr[i] << endl;
            }
        }
};

int main(){
    Stack s;
    int choice, item;
    
    do
    {
        cout << "\n******************STACK data structure!!!*****************\n";
        cout << "Enter the number function that you want to call. Enter o to exit\n";
        cout << "1. Push" << endl;
        cout << "2. Pop" << endl;
        cout << "3. Peek" << endl;
        cout << "4. Display" << endl;
        cout << "5. Clear Screen" << endl;
        cin >> choice;

        switch (choice)
        {
        case 0:
            break;
        
        case 1:
            cout << "Enter the data to be pushed = ";
            cin >> item;
            s.push(item);
            break;
    
        case 2:
            s.pop();
            break;
    
        case 3:
            s.peek();
            break;
        
        case 4:
            s.display();
            break;
    
        case 5:
            system("cls");
            break;
        
        default:
            cout << "Enter a correct choice between 1-5.\n\n";
            break;    
        }
    } while (choice!=0);
    
    return 0;

}