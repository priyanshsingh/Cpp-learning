#include <iostream>
#include <stdlib.h>
using namespace std;

struct Node{
    int data;
    struct Node* next;
};

void traversal(struct Node * head){
    while (head!=NULL)
    {
        cout << "Element is : " << head->data<<endl;
        head = head->next;
    }
    
}

int main()
{
    struct Node *head = new Node;
    struct Node *second = new Node;
    struct Node *third = new Node;
    struct Node *fourth = new Node;
    struct Node *fifth = new Node;
    struct Node *sixth = new Node;
    struct Node *seventh = new Node;

    head->data = 10;
    second->data = 31;
    third->data = 14;
    fourth->data = 451;
    fifth->data = 121;
    sixth->data = 144;
    seventh->data = 321;

    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;
    sixth->next = seventh;
    seventh->next = NULL;

    traversal(head);

    return 0;
}