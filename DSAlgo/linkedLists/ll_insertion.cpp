#include <iostream>
#include <stdlib.h>
using namespace std;

struct Node{
    int data;
    struct Node * next;
};

void traverse(struct Node * ptr){
    while (ptr!=NULL)
    {
        cout << "Element is = " <<ptr->data<<endl;
        ptr = ptr->next;
    }
}
struct Node * insert_at_beginning(struct Node * head, int data)
{
    struct Node * insert = new Node;
    insert->next = head;
    insert->data = data;
    return insert;
}

struct Node * insert_at_index(struct Node * head, int data, int index)
{
    struct Node * insert = new Node;
    struct Node * p = head;
    int i = 0;
    while (i!=(index-1))
    {
        p = p->next;
        i++;
    }
    insert->data = data;
    insert->next = p->next;
    p->next = insert;
    return head; 
}

int main()
{
    struct Node * head = new Node;
    struct Node * second = new Node;
    struct Node * third = new Node;
    struct Node * fourth = new Node;
    struct Node * fifth = new Node;


    head->data = 10;
    second->data = 30;
    third->data = 50;
    fourth->data = 70;
    fifth->data = 90;
    
    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = NULL;

    traverse(head);

    cout <<"\nAFTER INSETION AT THE BEGINNING:\n";    
    head = insert_at_beginning(head, 123);
    traverse(head);




    return 0;
}