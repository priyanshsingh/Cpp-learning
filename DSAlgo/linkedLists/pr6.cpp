#include <iostream>
using namespace std;

struct Node{
    int data;
    struct Node * next;
};

void display(struct Node * ptr)
{
    cout << "\n\nDisplay Function Called !!!\n\n";
    while (ptr!=NULL)
    {
        cout << ptr->data << " --> " ;
        ptr = ptr->next;
    }
    cout << "\n\n";
}

struct Node * insert_at_beginning(struct Node * head, int value)
{
    cout << "Insert at Beginning function called!!!\n\n";
    struct Node * ptr = new Node();
    ptr->next = head;
    ptr->data = value;
    return ptr;
}

struct Node * insert_in_between(struct Node * head, int value, int index)
{
    cout << "Insert in Between function called!!!\n\n";
    struct Node * ptr = new Node();
    struct Node * p = head;    
    ptr->data = value;
    int i = 0;
    while (i!=index-1)
    {
        p=p->next;
        i++;
    }
    ptr->next = p->next;
    p->next = ptr;
    return head;
}

struct Node * insert_at_end(struct Node * head, int value)
{
    cout << "Insert in Between function called!!!\n\n";
    struct Node * ptr = new Node();
    struct Node * p = head;    
    while (p->next!=NULL)
    {
        p = p->next;
    }
    ptr->data = value;
    p->next = ptr;
    ptr->next = NULL;
    
    return head;
}

struct Node * insert_at_index(struct Node * head, int value, struct Node * prevNode)
{
    cout << "Insert in Between function called!!!\n\n";
    struct Node * ptr = new Node();
    struct Node * p = head;    
    while (p->next!=NULL)
    {
        p = p->next;
    }
    ptr->data = value;
    p->next = ptr;
    ptr->next = NULL;
    
    return head;
}

int main(){
    struct Node * head = new Node();
    struct Node * second = new Node();
    struct Node * third = new Node();
    struct Node * fourth = new Node();
    struct Node * fifth = new Node();

    head->data = 15;
    head->next = second;

    second->data = 20;
    second->next = third;

    third->data = 25;
    third->next = fourth;

    fourth->data = 30;
    fourth->next = fifth;

    fifth->data = 35;
    fifth->next = NULL;

    display(head);

    int item, option, index;
    do
    {
        cout << "\n\nLINKED LIST\n\n";
        cout << "Select from given options. 0 to exit!!!\n";
        cout << "1. insert_at_beginning()" << endl;
        cout << "2. insert_in_between()" << endl;
        cout << "3. insert_at_end()" << endl;
        cout << "4. insert_at_index()" << endl;
        cout << "5. display()" << endl;
        cout << "6. clear_screen()" << endl << endl;
        cin >> option;

        switch (option)
        {
        case 0:
            break;
        
        case 1:
            cout << "Enter value to be inserted = ";
            cin >> item;
            head = insert_at_beginning(head, item);
            break;
        
        case 2:
            cout << "Enter value to be inserted = ";
            cin >> item;
            cout << "Enter the index value = ";
            cin >> index;
            head = insert_in_between(head, item, index);
            break;
        
        case 3:
            cout << "Enter value to be inserted = ";
            cin >> item;
            head = insert_at_end(head, item);
            break;
        
        case 4:
            cout << "Enter value to be inserted = ";
            cin >> item;
            head = insert_at_index(head, item, third);
            break;
            break;
        
        case 5:
            break;
        
        case 6:
            break;
        
        default:
            break;
        }

    } while (option!=0);
    

    return 0;
}