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
                arr[i]  = 0;
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

    void push(int value)
    {
        if(isFull())
            cout << "\n\nOVERFLOW!!!\n\n";
        else
        {
            cout << "Push function called!!!\n";
            top++;
            arr[top] = value;
        }
    }

    void pop()
    {
        int temp;
        if(isEmpty())
            cout << "\n\nUNDERFLOW!!!\n\n";
        else
        {
            cout << "Pop function called!!!\n";
            temp = arr[top];
            arr[top] = 0;
            top--;
            cout << "The popped value is = " << temp << endl;
        }
    }

    void peek()
    {
        cout << "The peeked value is = " << arr[top];
    }
    
    void display()
    {
        cout << "Display function called!!!\n\n";
        for (int j = 9; j >= 0; j--)
        {
            cout << arr[j] << endl;
        }
        
    }
};

int main()
{
    Stack s1;
    int item, option;

    do
    {
        cout << "\n\n\n***********************Stack Data Structure*******************\n\n\n";
        cout << "\nEnter choice or 0 to exit\n";
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
            cout << "Enter a number to be pushed into the Stack = ";
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
            cout << "\n\n\nEnter a correct choice!!!\n\n\n";
            break;
        }
    } while (option!=0);
    


    return 0;
}
