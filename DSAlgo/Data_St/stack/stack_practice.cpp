#include <iostream>
using namespace std;

struct Stack{
    private:
        int top;
        int arr[];
    public:
        Stack()
        {
            int top = -1;
            for (int i = 0; i < 5; i++)
            {
                arr[i] == 0;
            }
        }

        bool isEmpty()
        {
            if(top == -1)
                return true;
            else
                return false;
        }

        bool isFull()
        {
            if(top == 4)
                return true;
            else
                return false; 
        }

        void push(int val)
        {
            if(isFull())
            {
                cout << "Overflow" << endl;
            }
            else
            {
                top++;
                arr[top] = val;
            }
        }

        int pop()
        {
            if(isEmpty())
            {
                cout << "Underflow" << endl;
                return 0;
            }
            else
            {
                int popValue = arr[top];
                arr[top] = 0;
                top--;
                return(popValue);
            }
        }

        int peek(int index)
        {
            if(isEmpty())
            {
                cout << "Underflow" << endl;
                return 0;
            }
            else
            {
                return(arr[index]);
            }
        }

        int count()
        {
            return(top+1);
        }

        void change(int val, int index)
        {
            arr[index] = val;
            cout << "Value Updated Successfully!!!" << endl;
        }

        void display()
        {
            if(isEmpty())
            {
                cout << "Underflow" << endl;
            }
            else
            {
                for (int i = 0; i < 5; i++)
                {
                    cout << "Stack element number "<< i+1 << " is = " << arr[i] << endl;
                }
                
            }
        }


};

int main(){
    int choice, val, index;
    Stack s1;
    cout << endl;
    
    do
    {
        cout << "Enter a choice from the below options.\nEnter 0 to exit"<<endl;
        cout<<"1. isEmpty"<<endl;
        cout<<"2. isFull"<<endl;
        cout<<"3. push"<<endl;
        cout<<"4. pop"<<endl;
        cout<<"5. count"<<endl;
        cout<<"6. change"<<endl;
        cout<<"7. display"<<endl;
        cout<<"8. peek"<<endl;
        cout<<"9. Clear screen"<<endl;
        cin >> choice;
        cout << endl;


        switch (choice)
        {
        case 0:
            break;

        case 1:
            if(s1.isEmpty())
            {
                cout<<"Stack is Empty\n";
            }
            else
            {
                cout << "Stack is not Empty\n";
            }
            break;

        case 2:
            if(s1.isFull())
            {
                cout<<"Stack is Full\n";
            }
            else
            {
                cout << "Stack is not Full\n";
            }
            break;

        case 3:
            cout << "\nEnter the element you want to be inserted = ";
            cin >> val;
            s1.push(val);
            break;

        case 4:
            cout << "\nPop function called!!!\nPopped value = " << s1.pop() << endl;
            break;

        case 5:
            cout << "\nCount function called!!!\nCount value is = " << s1.count()<<endl;
            break;

        case 6:
            cout << "Which index you want to be updated = ";
            cin >> index;
            cout << "Enter the value = ";
            cin >> val;
            s1.change(val, index);
            break;

        case 7:
            cout << "Display function called!!!\n";
            s1.display();
            break;

         case 8:
            cout << "\nWhich index do tou want to peek?\n";
            cin >> index;
            cout << "Peeked Element is = " << s1.peek(index) << endl;
            break;
               
        case 9:
            system("cls");
            break;

        default:
            cout << "Enter proper option number !!!" << endl;
            break;
        }


    } while (choice != 0 );
    

    return 0;
}