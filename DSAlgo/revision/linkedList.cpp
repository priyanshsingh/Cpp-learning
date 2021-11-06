#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node* next;
};

void ll_traversal(struct Node *ptr)
{
    while (ptr == NULL)
    {
        cout << "Element = " << ptr->data;
        ptr = ptr->next;
    }
    
}


int main(){
    struct Node* head;
    struct Node* second;
    struct Node* third;
    head = new Node();
    second = new Node();
    third = new Node();

    head -> data = 1;
    head -> next = second;
    head -> data = 2;
    head -> next = third;
    head -> data = 3;
    head -> next = NULL;
    
    ll_traversal(head);

    return 0;
}