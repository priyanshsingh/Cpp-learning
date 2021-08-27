#include <iostream>
#include <string>
using namespace std;

class Queue
{
    private:
        int rear;
        int front;
        int arr[5];
    public:
        Queue()
        {
            int rear = -1;
            int front = -1;
            for (int i = 0; i < 5; i++)
            {
                arr[i]==0;
            }
        }

        bool isEmpty()
        {
            if(rear == -1 && front == -1)
                return true;
            else
                return false;
        }

        bool isFull()
        {
            if(rear == (sizeof(arr)-1))
                return true;
            else
                return false;
        }

        void enqueue(int val)
        {
            if(isFull())
                cout<<"Queue is full!";
            else if(isEmpty())
            {
                front = 0;
                rear = 0;
            }
            else
            {
                rear++;
            }
            arr[rear]=val;
        }

        int dequeue()
        {
            int x = 0;
            if(isEmpty())
                return 0;
            else if(front == rear)
            {
                x == arr[front];
                front = -1;
                rear = -1;
            }   
            else
            {
                x = arr[front];
                front++;
            }
            return x;
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
                        cout << arr[i] << "\t";
                    } 
                }
            }


};

int main()
{
    Queue q1;
    int value, option;

    do{
        cout << "\n\nWhat operation do you want to perform? Select option number. Enter 0 to exit.\n";
        cout << "1. Enqueue()\n";
        cout << "2. Dequeue()\n";
        cout << "3. isEmpty()\n";
        cout << "4. isFull()\n";
        cout << "5. display()\n";


        cin >> option;
        switch(option){
            case 0:
                break;
            case 1:
                cout << "Enter a number to enqueue in the queue = ";
                cin >> value;
                q1.enqueue(value);
                break;

            case 2:
                cout << "Dequeue Function called!\nDqueued Value = " << q1.dequeue()<<endl;
                break;
            

            case 3:
                if(q1.isEmpty())
                cout<<"Queue is Empty\n";
                else
                cout<<"Queue is not Empty\n";
                break;
        
            case 4:
                if(q1.isFull())
                cout<<"Queue is Full\n";
                else
                cout<<"Queue is not Full\n";
                break;
            case 5:
                cout << "Display function called: ";
                q1.display();
                break;

            default:
                cout<<"Enter a proper option please!";
        }
    }while(option != 0);

    return 0;
}