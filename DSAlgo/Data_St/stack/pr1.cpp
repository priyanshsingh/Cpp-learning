#include <iostream>
using namespace std;

class Stack{
    private:
        int top;
        int arr[10];
    public:
        Stack(){
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
            if (top == 4)
                return true;
            else
                return false;
        }

        void push (int item){
            if (isFull())
            {
                cout << "OVERFLOW!!!\n";
            }
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
                cout << "UNDERFLOW!!!\n";
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

        int count()
        {
            return (top+1);
        }

        int peek()
        {
            
        }

        void display()
        {
            cout << "Display Operation Called!!!";
        }
};


int main(){
    Stack s1;
    int choice = 0, item = 0;

    do
    {
        cout << "Enter a number to select the choice of the function that you want to perform. Enter 0 to exit.\n";
        cout << "1. Push" << endl;
        cout << "2. Pop" << endl;
        cout << "3. Count" << endl;
        cout << "4. Peek" << endl;
        cout << "5. Display" << endl;
        cout << "6  . Clear Screen" << endl << endl;
        cin >> choice;
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
            int temp1 = s1.pop();
            break;
        case 3:
            int countVal = s1.count();
            break;
        case 4:
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