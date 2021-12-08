#include <iostream>
using namespace std;

struct Node{
    int data;
    struct Node * next;
};

void display(struct Node * head)
{

    cout << "\n\nDisplay Function Called !!!\n\n";
    while (head!=NULL)
    {
        cout << head->data << " --> " ;
        head = head->next;
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
    cout << "insert_after_node function called successfully!!!\n\n";
    struct Node * ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = value;
    ptr->next = prevNode->next;
    prevNode->next = ptr;
    return head;
}

struct Node * delete_first_node(struct Node * head){
    struct Node * ptr = head;
    cout << "Deleted Node contained the value = " << ptr->data;
    head = head->next;
    delete ptr;
    return head;
}

struct Node * delete_at_index(struct Node * head, int index){
    struct Node * ptr = head;
    struct Node * p;
    int i = 0;
    while (i!=index-1)
    {
        ptr = ptr->next;
        i++;
    }
    p = ptr->next;
    ptr->next = p->next;
    cout << "Deleted Node contained the value = " << p->data;
    delete p;
    return head;
}

struct Node * delete_last_Node(struct Node * head){
    struct Node * p = head;
    struct Node * q = head->next;
    while (q->next!=NULL)
    {
        p = p->next;
        q = q->next;
    }
    cout << "Deleted Node contained the value = " << q->data;
    p->next = NULL;
    delete q;
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
        cout << "6. clear_screen()" << endl;
        cout << "7. delete_first_node()" << endl;
        cout << "8. delete_at_index()" << endl;
        cout << "9. delete_last_Node()" << endl << endl;
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
        
        case 5:
            display(head);
            break;
        
        case 6:
            system("cls");
            break;
        
        case 7:
            cout << "Deleting the first Node!!!\n";
            head = delete_first_node(head);
            break;
        
        case 8:
            cout << "Enter the index(0, 1, 2 and so on) of the node which is to be deleted = ";
            cin >> item;
            cout << "Deleting the node at index, " << index << endl;
            head = delete_at_index(head, item);
            break;
        
        case 9:
            cout << "Deleting the Last Node!!!\n";
            head = delete_last_Node(head);
            break;

        default:
            cout << "Enter a valid choice from 1-9\n\n";
            break;
        }

    } while (option!=0);
    

    return 0;
}