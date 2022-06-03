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

        void display()
    {
        if (isEmpty())
        {
            cout << "UNDERFLOW!!!" <<endl;
        }
        else
        {
            cout << "Elements in the Stack: " <<endl;
            for (int i = 4; i >= 0; i--)
            {
                cout << arr[i] << endl;
            }
            
        }        
    }
};


int main(){
    Stack s1;
    int choice = 0, item = 0, index = 0, temp1 = 0, countVal = 0, peek1 = 0 ;

    do
    {
        cout << "\n\n a number to select the choice of the function that you want to perform. Enter 0 to exit.\n";
        cout << "1. Push" << endl;
        cout << "2. Pop" << endl;
        cout << "3. Count" << endl;
        cout << "4. Peek" << endl;
        cout << "5. Display" << endl;
        cout << "6. Clear Screen" << endl << endl;
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
            temp1 = s1.pop();
            break;
        case 3:
            countVal = s1.count();
            cout << "The number of Elements in the stack are = " << countVal << endl;
            break;
        case 4:
            cout << "Peek function called!!!\nEnter the index value = ";
            cin >> index;
            if (index<=4)
            {
                peek1 = s1.peek(index);
                cout << "The element at the index, " << index << " is = " << peek1 << endl;
            }
            else
            {
                cout << "Enter Correct index value!!!";
            }
            break;
        case 5:
            s1.display();  
            break;
        case 6:
            system("cls");  
            break;

        default:
            cout << "Enter a correct choice !!!" << endl;
            break;
        }
    } while (choice != 0);

    return 0;
}
