#include <iostream>
using namespace std;

struct Node{
    int data;
    struct Node * next;
}

void display(struct Node * ptr)
{
    while(ptr->next!=NULL)
    {
        cout << ptr->data << " --> ";
    }
}

int main(){
    struct Node * head = new Node();
    struct Node * second = new Node();
    struct Node * third = new Node();
    struct Node * fourth = new Node();
    struct Node * fifth = new Node();

    head->data = 10;
    head->next = second;

    second->data = 20;
    second->next = third;

    third->data = 30;
    third->next = fourth;

    fourth->data = 40;
    fourth->next = fifth;

    fifth->data = 50;
    fifth->next = NULL;

    display(head);

    return 0;
}