#include <iostream>
using namespace std;

class Queue
{
    public:
        int front, rear, size;
        unsigned capacity;
        int *array;

        Queue(int c)
        {
            capacity = c;
            front = -1;
            rear = -1;
            array = new int(capacity);
            for (int i = 0; i < capacity; i++)
            {
                array[i] == 0;
            }
            
        }

        bool isFull()
        {
            if (size==capacity)
                return true;
            else
                return false;
        }
        bool isEmpty()
        {
            if (size==0)
                return true;
            else
                return false;
        }

        void enqueue(int value)
        {
            if (isFull())
            {
                cout << "OverFlow Condition!!!";
            }
            else if(isEmpty())
            {
                front = 0;
                rear = 0;
            }
            else
            {
                rear ++;
            }
            array[rear] = value; 
        }
        int dequeue()
        {
            int x = 0;
            if(isEmpty())
                return 0;
            else if(front == rear)
            {
                x == array[front];
                front = -1;
                rear = -1;
            }   
            else
            {
                x = array[front];
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
                        cout << array[i] << "\t";
                    } 
                }
            }
};




int main(){
    Queue q1(5);
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