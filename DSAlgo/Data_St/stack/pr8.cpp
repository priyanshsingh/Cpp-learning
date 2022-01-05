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
        if(isFull())
            cout << "\n\nStack Overflow !!!\n\n";
        else
        {
            top++;
            arr[top] = item;
        }
    }
    void pop()
    {
        if(isEmpty())
            cout << "\n\nStack UNderflow!!!\n\n";
        else
        {
            int temp = arr[top];
            arr[top] = 0;
            top--;
            cout << "Popper item is = " << temp;
        }
    }

    void peek()
    {
        cout << "The peeked element is = " << arr[top] << endl;
    }

    void display()
    {
        cout << "\n\nDisplay Function called successfully!!!!\n\n";
        for (int i = 9; i >= 0; i--)
        {
            cout << arr[i] << endl;
        }
    }
};

int main(){
    Stack s1;
    int option, item;
    do
    {
        cout << "\n\n\nStack Data Structure: \n\n\n";
        cout << "Select from the following options! 0 to exit\n";
        cout << "1. Push" << endl;
        cout << "2. Pop" << endl;
        cout << "3. Peek" << endl;
        cout << "4. Display" << endl;
        cout << "5. ClearScreen" << endl;
        cin >> option;

    switch (option)
    {
    case 0:
        break;
    
    case 1:
        cout << "Enter the item to be pushed into the stack!!! = ";
        cin >> item;
        s1.push(item);
        break;
    
    case 2:
        cout << "Pop operation called successfully!!!";
        s1.pop();
        break;
    
    case 3:
        cout << "Peek operation called successfully!!!";
        s1.peek();
        break;
    
    case 4:
        s1.display();
        break;
    
    case 5:
        system("cls");
        break;
    
    default:
        cout << "Enter a correct choice!!!\nThat is 1-5. Or 0 to exit\n";
        break;
    }
    } while (option!=0);
    

    return 0;
}