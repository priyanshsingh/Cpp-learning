#include <iostream>
using namespace std;

struct Node{
    int data;
    struct Node * next;
};

void Display(struct Node * ptr)
{
    cout << "Display funciton called successfully!!!\n";
    while(ptr!=NULL)
    {
        cout << ptr->data << " --> ";
        ptr = ptr->next;
    }
}

int main(){
    struct Node * head = new Node();
    struct Node * second = new Node();
    struct Node * third = new Node();
    struct Node * fourth = new Node();
    struct Node * fifth = new Node();

    head->data=10;
    head->next=second;

    second->data=20;
    second->next=third;
    
    third->data=55;
    third->next=fourth;
    
    fourth->data=78;
    fourth->next=fifth;
    
    fifth->data=99;
    fifth->next=NULL;

    Display(head);
    
    return 0;
}