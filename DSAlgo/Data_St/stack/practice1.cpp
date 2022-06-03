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
        if (top == -1)
            return true;
        else
            return false;
    }

    bool isFull()
    {
        if (top == 9)
            return true;
        else
            return false;
    }

    void push(int item)
    {
        if (isFull())
            cout << "Stack OVERFLOW!\n";
        else
        {
            top++;
            arr[top] = item;
        }
    }

    int pop()
    {
        if (isEmpty())
        {
            cout << "Stack UNDERFLOW!\n";
            return 0;
        }
        else
        {
            int temp = arr[top];
            arr[top] = 0;
            top--;
            return temp;
        }
    }

    int peek()
    {
        if (isEmpty())
        {
            cout << "Stack UNDERFLOW!\n";
            return 0;
        }
        else
        {
            return arr[top];
        }
    }

    void display()
    {
        if (isEmpty())
        {
            cout << "Stack UNDERFLOW!\n";
        }
        else
        {
            cout << "Elements in the Stack are:\n";
            for (int j = 9; j >= 0; j--)
            {
                cout << arr[j] << endl;
            }
        }
    }
};

int main()
{
    Stack s1;
    int choice = 0, item = 0, index = 0, temp1 = 0, temp2 = 0, countVal = 0, peek1 = 0;

    do
    {
        cout<<"\n****************** STACK DATA STRUCTURE *********************\n";
        cout<<"Enter a choice from the following functions: (1-5). Enter 0 to exit!\n";
        cout<<"1. Push" << endl;
        cout<<"2. Pop" << endl;
        cout<<"3. Peek" << endl;
        cout<<"4. Display" << endl;
        cout<<"5. Clear Screen" << endl;
        cin>>choice;
        switch (choice)
        {
        case 0:
            break;
        case 1:
            cout << "Enter the value to be pushed = ";
            cin >> item;
            s1.push(item);
            break;
        case 2:
            cout << "Pop function called!!!\n";
            temp1 = s1.pop();
            break;
        case 3:
            cout << "Peek function called!!!\n";
            temp2 = s1.peek();
            cout << "The Peeked item is " << temp2 << endl;
            break;
        case 4:
            s1.display();  
            break;
        case 5:
            system("cls");
            break;

        default:
            cout << "Enter a correct choice !!!" << endl;
            break;
        }
    } while (choice != 0);

    return 0;
}