#include <iostream>
using namespace std;

class node{
    public:
        int data;
        node* next;
};

void display(node*ptr)
{
    while(ptr!=NULL)
    {
        cout << ptr->data << "      ";
        ptr = ptr->next;
    }
}


int main(){
    
    node*head=new node();
    node*first=new node();
    node*second=new node();
    node*third=new node();
        
    head->data=1;
    head->next=first;
    
    first->data=2;
    first->next=second;
    
    second->data=3;
    second->next=third;
    
    third->data=4;
    third->next=NULL;

    display(head);

    return 0;
}