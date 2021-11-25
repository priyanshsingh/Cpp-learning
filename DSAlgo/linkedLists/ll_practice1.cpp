#include <iostream>
using namespace std;

struct Node{
    int data;
    struct Node * next;
};

void traversal(struct Node * ptr)
{
    while (ptr!=NULL)
    {
        cout << "Elements in the Linked List are: \n";
        cout << "Element: " << ptr->data << endl;
        ptr = ptr->next;
    }
    
}

int main(){
    struct Node * head = new Node;
    struct Node * second = new Node;
    struct Node * third = new Node;
    struct Node * fourth = new Node;

    head->data = 10;
    head->next = second;
    
    second->data = 20;
    second->next = third;
    
    third->data = 30;
    third->next = fourth;
    
    fourth->data = 40;
    fourth->next = NULL;

    traversal(head);


    return 0;
}