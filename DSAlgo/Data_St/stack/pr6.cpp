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
            if(isFull())
                cout << "OVERFLOW!!!\nThe element was not pushed into the stack!!!\n\n";
            else
            {
                cout << "Push Function called successfully!!!\n";
                top++;
                arr[top] = item;
            }
        }
        void pop()
        {
            int temp = 0;
            if(isEmpty())
                cout << "UNDERFLOW!!!\n\n";
            else
            {
                cout << "Pop Function called successfully!!!\n";
                temp = arr[top];
                arr[top] = 0;
                top--;
                cout << "Popped element = " << temp << "\n\n";                
            }
        }

        void peek()
        {
            cout << "Peek Function called successfully!!!\n";
            cout << "Peeking Element = " << arr[top] <<"\n\n";
        }

        void display()
        {
            cout << "Display Funciton called successfully!!!\n";
            for (int j = 9; j >= 0; j--)
            {
                cout << arr[j] << endl;
            }
            
        }

        int count()
        {
            int count = 0;
            for (int k = 0; k < 10; k++)
            {
                if (arr[k]!=0)
                {
                    count++;
                }
                else
                {
                    continue;
                }  
            }
            return count;
        }

        void emptyStack()
        {
            cout << "EmptyStack Function called successfully!!!\n\n";
            for (int m = 0; m < 10; m++)
            {
                arr[m] = 0;
            }
            top = -1;
        }
};

int main(){
    int item, choice;
    Stack s1;

    do
    {
        cout << "\n\n\n*************************STACK******************************\n\n";
        cout << "Enter a valid choice frombelow given options. Enter 0 to exit!!!\n";
        cout << "1. Push" << endl;
        cout << "2. Pop" << endl;
        cout << "3. Peek" << endl;
        cout << "4. Display" << endl;
        cout << "5. IsFull" << endl;
        cout << "6. IsEmpty" << endl;
        cout << "7. Clear Screen" << endl;
        cout << "8. Count" << endl;
        cout << "9. Empty Stack" << endl;
        cin >> choice;

        switch (choice)
        {
        case 0:
            break;
        
        case 1:
            cout << "Enter a number to be pushed into the stack = ";
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
            if(s1.isFull())
                cout << "The Stack is Full i.e. OVERFLOW!!!\n";
            else
                cout << "Stack has some Empty Spaces!!!\n";
            break;
        
        case 6:
            if(s1.isEmpty())
                cout << "The Stack is Empty i.e. UNDERFLOW!!!\n";
            else
                cout << "Stack has some elements in it!!!\n";
            break;
        
        case 7: 
            system("cls");
            break;
        
        case 8: 
            cout << "Number of Elements in the Stack = " << s1.count() << "\n\n";
            break;
        
        case 9: 
            s1.emptyStack();
            break;
        
        default:
            cout << "Enter a valid choice from 1 to 9!!!\n\n";
            break;
        }
    } while (choice!=0);
    


    return 0;
}