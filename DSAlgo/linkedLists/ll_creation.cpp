#include <iostream>
#include <stdlib.h>
using namespace std;

struct Node{
    int data;
    struct Node *next;
};

void linked_List_Traversal(struct Node * ptr){
    while (ptr != NULL)
    {
        cout << "Element: " << ptr->data << endl;
        ptr = ptr->next;
    }
}

int main()
{
    struct Node* head = new Node;
    struct Node* second = new Node;
    struct Node* third = new Node;
    struct Node* fourth = new Node;
    
    head->data = 7;
    head->next = second;

    second->data = 8;
    second->next = third;
    
    third->data = 9;
    third->next = fourth;

    fourth->data = 10;
    fourth->next = NULL;

    linked_List_Traversal(head);    

    return 0;
}