#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node* next;
};


void linklist(struct node * n)
{
    cout<<"\n\nDisplay the content: \n\n";
    while (n != NULL)
    {
        cout << n->data << " ==> ";
        n = n->next;
    }
}
struct node * insertAtbegnning(struct node* head, int new_data)
{
    cout<<"\n\nInsert at beggining: \n\n";
    struct node * ptr = new node();
    ptr->data = new_data;
    ptr->next = head;
    return ptr;

}

int main()
{
   struct node *head = new node();
   struct node *second = new node();
   struct node *third = new node();

    head->data = 1;
    head->next = second;

    second->data = 3;
    second->next = third;

    third->data = 4;
    third->next = NULL;

    linklist(head);

    head = insertAtbegnning(head,5);
    linklist(head);
    
    return 0;
}