#include <iostream>
using namespace std;

struct Node{
    int data;
    struct Node * next;
};

void display_ll(struct Node * ptr){
    cout << "Display function called successfully!!!\n";
    while (ptr!=NULL)
    {
        cout << ptr->data << " --> ";
        ptr = ptr->next;
    }
    cout << endl;
}

struct Node * insert_at_beginning(struct Node * head, int item){
    struct Node * ptr = new Node();
    cout << "insert_at_beginning function called successfully!!!\n\n";
    ptr->next = head;
    ptr->data = item;
    return ptr;
}

struct Node * insert_in_between(struct Node * head, int item, int index){
    struct Node * ptr = new Node();
    struct Node * p = head;
    cout << "insert_in_between function called successfully!!!\n\n";
    int i = 0;
    while (i!=index-1)
    {
        p=p->next;
        i++;
    }
    ptr->data = item;
    ptr->next = p->next;
    p->next = ptr;
    return head;
}

struct Node * insert_at_end(struct Node * head, int item, int index){
    struct Node * ptr = new Node();
    struct Node * p = head;
    cout << "insert_at_end function called successfully!!!\n\n";
    ptr->data = item;

    while (p->next!=NULL)
    {
        p=p->next;
    }
    p->next = ptr;
    ptr->next = NULL;
    return head;
}

struct Node * insert_after_node(int value, struct Node * prevNode, struct Node * head)
{
    cout << "insert_after_node function called successfully!!!\n\n";
    struct Node * ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = value;
    ptr->next = prevNode->next;
    prevNode->next = ptr;
    return head;
}


int main(){
    int choice, item, index;

    struct Node * head = new Node();    
    struct Node * second = new Node();    
    struct Node * third = new Node();    
    struct Node * fourth = new Node();    
    struct Node * fifth = new Node();    

    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = fourth;

    fourth->data = 4;
    fourth->next = fifth;

    fifth->data = 5;
    fifth->next = NULL;

    display_ll(head);

    do
    {
        cout << "LINKED LIST IMPLEMENTATION BY PRIYANSH!!!\n\n";
        cout << "Enter a choice from the below given functions!!!\nEnter 0 to exit.\n";
        cout << "1. Insert at beginning" << endl;
        cout << "2. Insert in between" << endl;
        cout << "3. Insert at end" << endl;
        cout << "4. Insert at an index" << endl;
        cout << "5. Display" << endl;
        cout << "6. ClearScreen" << endl;
        cin >> choice;

        switch (choice)
        {
            
        case 0:
            break;
        
        case 1:
            cout << "\nEnter the number which you want to be inserted = ";
            cin >> item;
            head = insert_at_beginning(head, item);
            break;
        
        case 2:
            cout << "\nEnter the number which you want to be inserted = ";
            cin >> item;
            cout << "\nEnter the index where the number is to be inserted = ";
            cin >> index;
            head = insert_in_between(head, item, index);
            break;
        
        case 3:
            cout << "\nEnter the number which you want to be inserted = ";
            cin >> item;
            head = insert_at_end(head, item, index);
            break;
        
        case 4: 
            cout << "Enter the number to be inserted after a node = ";
            cin >> item;
            head = insert_after_node(item, third, head);
            break;
        
        case 5:
            display_ll(head);
            break;
        
        case 6:
            system("cls");
            break;
    
        default:
            cout << "\nEnter a valid choice from 1-6!!!\n";
            break;
        }

    } while (choice!=0);
    

    return 0;
}