#include <iostream>
using namespace std;
#define N 5
int queue[N];
int front = -1, rear = -1;

class Queue
{
    public:
    Queue()
    {
        for (int i = 0; i < N; i++)
        {
            queue[i] == 0;
        }
        
    }

    bool isFull()
    {
        if (rear == (N-1))
        return true;
        else
        return false;    
    }

    bool isEmpty()
    {
        if (rear == -1 && front == -1)
        return true;
        else
        return false;    
    }

    void enqueue(int x)
    {
        if (isFull())
        {
            cout << "Overflow Condition Reached!!!";
        }
        else if (isEmpty())
        {
            front == 0;
            rear == 0;
        }
        else
        {
            rear++;
        }
        queue[rear] == x;

    }

    void dequeue()
    {
        if (isEmpty())
        {
            cout << "Underflow Condition!!!";
        }
        else if(front == rear)
        {
            cout << "Dequeued element = " << queue[front] << endl;
            front == -1;
            rear == -1;
        }
        else
        {
            cout << "Dequeued element = " << queue[front] << endl;
            front++;
        }
    } 

    void peek()
    {
        if (isEmpty())
        {
            cout << "Underflow Condition!!!";
        }
        else
        {
            cout << "Front of queue is : \n" << queue[front] << "    "; 
        }
    }

    void display()
    {
        if(isEmpty())
        {
            cout << "Queue is Empty!\n";
        }
        else
        {
            cout << "All the values in the Queue are: \n";
            for (int i = 4; i >= 0; i--)  
            {
                cout << queue[i] << "\t";
            } 
        }
    }
};
int main(){
    Queue q1;
    int value, choice;
    do
    {
        cout << "Select the function which you want to perform. Type 0 to exit\n";
        cout << "1. Enqueue()" << endl;
        cout << "2. Dequeue()" << endl; 
        cout << "3. isFull()" << endl; 
        cout << "4. isEmpty()" << endl; 
        cout << "5. peek()" << endl; 
        cout << "6. display()" << endl; 
        cout << "7. Clear Screen()" << endl; 

        cin >> choice;

        switch (choice)
        {
        case 0:
            break;
        case 1:
            cout << "Enqueue Function Called!!!\nEnter the value for the element = ";
            cin >> value;
            q1.enqueue(value);
            break;
        case 2:
            cout << "Dequeue Function Called!!!\n";
            q1.dequeue();
            break;
        case 3:
            cout << "isFull function called!!!\n";
            if(q1.isFull())
                cout<<"Queue is Full\n";
                else
                cout<<"Queue is not Full\n";
            break;
        case 4:
            cout << "isEmpty function called!!!\n";
            if(q1.isEmpty())
                cout<<"Queue is Empty\n";
                else
                cout<<"Queue is not Empty\n";
            break;
        case 5:
            cout << "Peek function called!!!\n";
            q1.peek();
            break;
        case 6:
            cout << "Display function called!!!\n";
            q1.display();
            break;
        case 7:
            system("cls");
            break;
        
        default:
            cout << "Enter the proper value of the choice variable!!!";
            break;
        }
    } while (choice!=0);
    

    return 0;
}