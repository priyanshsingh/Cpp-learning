#include <iostream>
using namespace std;

#define N 5
int stack[N];
int top = -1, value = 0;

void push(int x){
    if(top == (N-1))
        cout << "OVERFLOW CONDITION!!!\n";
    else
    {
        
        top++;
        stack[top]=x;
    }
}

void pop()
{
    if (top == -1)
    {
        cout << "UNDERFLOW CONDITION!!!\n";
    }
    else
    {
        int temp;
        temp = stack[top];
        top--;
        cout << "POPPED ITEM IS = " << temp << endl;
    }
}

void peek()
{
    if (top == -1)
    {
        cout << "UNDERFLOW CONDITION!!!\n";
    }
    else
    {
        cout << "PEEK ELEMENT = " << stack[top];
    }
}

void display()
{
    if (top == -1)
    {
        cout << "UNDERFLOW CONDITION!!!\n";
    }
    else
    {
        cout << "ITEMS OF THE STACK ARE : \n";
        int i;
        for (i = top; i >= 0; i--)
        {
            cout << stack[i] << endl;
        }
        
    }
}


int main(){
    int choice, item;
    // cout << "Implementation of Stack using ARRAYS!!!" << endl;
    // cout << "Enter a choice from 1 to 4. Enter 0 to exit:\n";
    // cout << "1. PUSH\n2. POP\n3. PEEK\n4. DISPLAY\n";
    // cin >> choice;

    while(1)
        {
                printf("\n1.Push\n");
                printf("2.Pop\n");
                printf("3.Peek\n");
                printf("4.Display\n");
                printf("5.Quit\n");
                printf("\nEnter your choice : ");
                scanf("%d",&choice);
                switch(choice)
                {
                 case 1 :
                        printf("\nEnter the item to be pushed : ");
                        scanf("%d",&item);
                        push(item);
                        break;
                 case 2:
                        pop();
                        break;
                 case 3:
                        printf("\nItem at the top is : %d\n");
                        peek();
                        break;
                 case 4:
                        display();
                        break;
                 case 5:
                        exit(1);
                 default:
                        printf("\nWrong choice\n");
                }
        }
    
    return 0;
}