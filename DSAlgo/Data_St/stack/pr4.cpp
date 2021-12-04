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

    void push(int element)
    {
        if (isFull())
        {
            cout << "Overflow!!!\n";
        }
        else
        {
            cout << "Push operation called!!!\n";
            top++;
            arr[top] = element;
        }
    }

    void pop()
    {
        int temp = 0;
        if (isEmpty())
        {
            cout << "Pop operation called!!!\n";
        }
        else
        {
            temp = arr[top];
            arr[top] = 0;
            top--;
            cout << "The popped value from the stack is = " << temp << endl;
        }
    }

    void peek()
    {
        cout << "Peek function called!!!\nThe value returned by the peek function is = " << arr[top] << endl;
    }

    void display()
    {
        cout << "Display operation called successfully!!!\nThe element in the stack are: \n";
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
        cout << "STACK Data Structure made by Priyansh Singh\n";
        cout << "Enter the values from 1-5 to continue. Enter 0 to exit\n";
        cout << "1. Push()" << endl;
        cout << "2. Pop()" << endl;
        cout << "3. Peek()" << endl;
        cout << "4. Display()" << endl;
        cout << "5. ClearScreen()" << endl;
        cin >> choice;

        switch (choice)
        {
        case 0:
            break;
        case 1:
            cout << "Enter the value you want to be pushed into the stack!!!\n";
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
            cout << "Enter a proper value!!!\n";
            break;
        }
    } while (choice!=0);
    


    return 0;
}