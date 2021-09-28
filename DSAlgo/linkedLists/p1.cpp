#include <iostream>
using namespace std;

struct Node{
    int data;
    struct Node *next;
};

void ll_traversal(struct Node *ptr){
    cout << "Entered Linked List: "<<endl;
    while (ptr!=NULL)
    {
        cout << "Element: " << ptr->data <<endl;
        ptr = ptr->next;
    }
    
}

struct Node * insert_at_beginning(struct Node * head, int data){
    struct Node * insert = new Node;
    insert->next = head;
    insert->data = data;
    return insert;
}

struct Node * insert_in_between(struct Node * head, int index, int data)
{
    struct Node * insert = new Node;
    struct Node * p = new Node;
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
    struct Node *head = new Node;
    struct Node *second = new Node;
    struct Node *third = new Node;
    struct Node *fourth = new Node;
    struct Node *fifth = new Node;

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

    ll_traversal(head);

    int insert_begin, node_index, insert_between;
    cout << "Enter data to be inserted at the beginning = ";
    cin >> insert_begin;

    cout <<"\nAFTER INSETION AT THE BEGINNING:\n";    
    head = insert_at_beginning(head , insert_begin);
    ll_traversal(head);
    
    cout << "Enter index where node is to be inserted = ";
    cin >> node_index;
    cout << "Enter data to be inserted at the index = ";
    cin >> insert_between;
    cout <<"\nAFTER INSETION AT INDEX:\n";    
    head = insert_in_between(head , 2, 3);
    ll_traversal(head);



    return 0;
}