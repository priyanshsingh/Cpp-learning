#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node * next;
};

void Display_linked_list(struct Node * ptr){
    printf("Display_linked_list function called successfully!!!\n");
    while(ptr!=NULL)
    {
        printf("%d --> ", ptr->data);
        ptr = ptr->next;
    }
}

struct Node * insert_at_beginning(int value, struct Node * head)
{
    printf("insert_at_beginning function called successfully!!!\n\n");
    struct Node * new_node = (struct Node *)malloc(sizeof(struct Node));
    new_node->next = head;
    new_node->data = value;
    return new_node;

}

void insert_in_between(int value, int index)
{
    printf("insert_in_between function called successfully!!!\n\n");
}

void insert_at_end(int value)
{
    printf("insert_at_end function called successfully!!!\n\n");
}

void insert_after_node(int value)
{
    printf("insert_after_node function called successfully!!!\n\n");
}

int main()
{
    int choice, item, index;
    struct Node * head = (struct Node *)malloc(sizeof(struct Node));
    struct Node * second = (struct Node *)malloc(sizeof(struct Node));
    struct Node * third = (struct Node *)malloc(sizeof(struct Node));
    struct Node * fourth = (struct Node *)malloc(sizeof(struct Node));
    struct Node * fifth = (struct Node *)malloc(sizeof(struct Node));

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

    Display_linked_list(head);

    do
    {
        printf("\n\nEnter the operation number that you want to perform!!!\nEnter 0 to exit.\n\n");
        printf("1. Insert at Beginning.\n2. Insert in Between.\n3. Insert at End.\n4. Insert after a given node\n5. Display Linked List\n6. ClearScreen\n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 0:
            break;
        
        case 1:
            printf("Enter the number to be inserted at the beginning = ");
            scanf("%d", &item);
            head = insert_at_beginning(item, head);
            break;
        
        case 2:
            printf("Enter the number to be inserted in between = ");
            scanf("%d", &item);
            printf("Enter the index value = ");
            scanf("%d", &index);
            insert_in_between(item, index);
            break;
        
        case 3:
            printf("Enter the number to be inserted at the end = ");
            scanf("%d", &item);
            insert_at_end(item);
            break;
        
        case 4:
            printf("Enter the number to be inserted after a node = ");
            scanf("%d", &item);
            insert_after_node(item);
            break;
        
        case 5:
            Display_linked_list(head);
            break;
        
        case 6:
            system("cls");
            break;
        
        default:
            break;
        }
    } while (choice!=0);
    


    return 0;
}