#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* next;

};

void Display_linked_list(struct Node * ptr){
    printf("Display_linked_list function called successfully!!!\n");
    while(ptr->next!=NULL)
    {
        printf("%d --> ", ptr->data);
        ptr = ptr->next;
    }
}

int main()
{
    struct Node * head;
    head = (struct Node *) malloc (sizeof(struct Node));

    struct Node * second;
    second = (struct Node *) malloc (sizeof(struct Node));
    
    struct Node * third;
    third = (struct Node *) malloc (sizeof(struct Node));
    
    struct Node * fourth;
    fourth = (struct Node *) malloc (sizeof(struct Node));
    
    head->data = 10;
    head->next = second;

    second->data = 20;
    second->next = third;

    third->data = 30;
    third->next = fourth;

    fourth->data = 40;
    fourth->next = NULL;

    Display_linked_list(head);

    return 0;
}