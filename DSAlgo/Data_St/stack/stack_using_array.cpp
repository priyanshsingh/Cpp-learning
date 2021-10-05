#include <iostream>
using namespace std;

class Stack
{
private:
    int top;
    int arr[5];
public:
    Stack()
    {
        top = -1;
        for (int i = 0; i < 5; i++)
        {
            arr[i] = 0; 
        }
    }
    bool isEmpty()
    {
        if (top == -1)
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
            cout << "OVERFLOW of Stack!!!" <<endl;
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
            cout << "UNDERFLOW of Stack" <<endl;
            return 0;
        }
        else
        {
            int popVal = arr[top];
            arr[top] = 0;
            top--;
            return popVal;
        }
    }

    int count()
    {
        return (top+1);
    }

    int peek(int position)
    {
        if (isEmpty())
        {
            cout << "Stack Underflow!!!"<<endl;
            return 0;
        }
        else
        return arr[position];
    }

    void change(int val, int position)
    {
        arr[position] = val;
        cout << "Value changed at position "<<position<<" successfully!!!"<<endl;
    }

    void display()
    {
        if (isEmpty())
        {
            cout << "UNDERFLOW of Stack !!!" <<endl;
        }
        else
        {
            cout << "Elements in the Stack: " <<endl;
            for (int i = 0; i < 5; i++)
            {
                cout << arr[i] << endl;
            }
            
        }        
    }
};



int main(){
    
    Stack s1;
    int option, position, val;

    do
    {
        cout << "\n\nWhat operation do you want to perform? Select option number. ENter 0 to exit.\n";
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. isEmpty\n";
        cout << "4. isFull\n";
        cout << "5. peek\n";
        cout << "6. count\n";
        cout << "7. change\n";
        cout << "8. display\n";
        cout << "9. Clear Screen\n\n";
        cin >> option;

        switch (option)
        {
        case 0:
            break;
        
        case 1:
            cout << "\nEnter item to be pushed in stack = ";
            cin >> val;
            s1.push(val);
            break;

        case 2:
            cout << "\nPop function called!!!\nPopped value = " << s1.pop() << endl;
            break;

        case 3:
            cout << "\nIsEmpty Called!!!\n";
            if (s1.isEmpty())
                cout << "Stack is Empty!!!\n";
            else
                cout<<"Stack is not empty!!!\n";
            break;

        case 4:
            cout << "\nIsFull Called!!!\n";
            if (s1.isFull())
                cout << "Stack is Full!!!\n";
            else
                cout<<"Stack is not Full!!!\n";
            break;

        case 5:
            cout << "\nWhich index do tou want to peek?\n";
            cin >> position;
            s1.peek(position);
            break;
                
        case 6:
            cout << "\nCount function called!!!\nCount value is = " << s1.count()<<endl;
            break;

        case 7:
            cout << "Which index you want to be updated = ";
            cin >> position;
            cout << "Enter the value = ";
            cin >> val;
            s1.change(val, position);
            break;

        case 8:
            cout << "Display function called!!!\n";
            s1.display();
            break;

        case 9:
            system("cls");
            break;

        default:
            cout << "Enter proper option number !!!" << endl;
            break;
        }

    } while (option !=0);
    

    return 0;
}