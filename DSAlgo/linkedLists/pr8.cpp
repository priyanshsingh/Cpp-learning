#include <iostream>
using namespace std;

struct Node{
    int data;
    struct Node * next;
};

void display(struct Node * ptr)
{
    cout << "Display funciton called!!!\n\n";
    while (ptr!=NULL)
    {
        cout << ptr->data << " --> ";
        ptr = ptr->next;
    }
}

struct Node * insert_at_beginning(struct Node * head, int item){
    cout << "\nInsert At Beginning Function called!!!\n";
    struct Node * ptr = new Node();
    ptr->data = item;
    ptr->next = head;
    return ptr;
}

struct Node * insert_in_between(struct Node * head, int item, int index){
    cout << "\nInsert in Between Function called!!!\n";
    struct Node * ptr = new Node();
    struct Node * p = head;
    int i = 0;
    while (i!=index-1)
    {
        p = p->next;
        i++;
    }
    ptr->data = item;
    ptr->next = p->next;
    p->next = ptr;
    return head;
}

struct Node * insert_at_end(struct Node * head, int item){
    cout << "\nInsert at End Function called!!!\n";
    struct Node * ptr = new Node();
    struct Node * p = head;
    while (p->next!=NULL)
    {
        p = p->next;
    }
    ptr->data = item;
    p->next = ptr;
    ptr->next = NULL;
    return head;
}

struct Node * insert_at_index(struct Node * head, struct Node * prevNode, int item){
    cout << "insert_after_node function called successfully!!!\n\n";
    struct Node * ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = item;
    ptr->next = prevNode->next;
    prevNode->next = ptr;
    return head;
}

struct Node * delete_first(struct Node * head)
{
    struct Node * p = head;
    cout << "Deleted Node contained the value = " << p->data;
    head = head->next;
    delete p;
    return head;
}

struct Node * delete_index(struct Node * head, int index)
{
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
struct Node * delete_end(struct Node * head)
{
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
    int item, index, option;
    struct Node * head = new Node();
    struct Node * second = new Node();
    struct Node * third = new Node();
    struct Node * fourth = new Node();
    struct Node * fifth = new Node();

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
    
    display(head);

    do
    {
        cout << "\n\n\n********************LINKED LIST*********************\n\n\n";
        cout << "1. Insert at Beginning" << endl;
        cout << "2. Insert in Between" << endl;
        cout << "3. Insert at End" << endl;
        cout << "4. Insert at INDEX" << endl;
        cout << "5. Delete first Node" << endl;
        cout << "6. Delete Node in Between" << endl;
        cout << "7. Delete Last Node" << endl;
        cout << "8. Display Linked List" << endl;
        cout << "9. ClearScreen" << endl;
        cin >> option;

        switch (option)
        {
        case 0:
            break;
        
        case 1:
            cout << "\nEnter the number to be inserted in the linked list = ";
            cin >> item;
            head = insert_at_beginning(head, item);
            break;
        
        case 2:
            cout << "\nEnter the number to be inserted in the linked list = ";
            cin >> item;
            cout << "\nEnter the index where you want the number to be inserted = ";
            cin >> index;
            head = insert_in_between(head, item, index);
            break;
        
        case 3:
            cout << "\nEnter the number to be inserted in the linked list = ";
            cin >> item;
            head = insert_at_end(head, item);
            break;
        
        case 4:
            cout << "\nEnter the number to be inserted in the linked list = ";
            cin >> item;
            head = insert_at_index(head, third, item);
            break;
        
        case 5:
            cout << "Deleting the First Node!!!\n";
            head = delete_first(head);
            break;
        
        case 6:
            cout << "Enter the index = ";
            cin >> index;
            cout << "Deleting the Node at the position, " << index << endl << endl;
            head = delete_index(head, index);
            break;
        
        case 7:
            cout << "Deleting the Last Node!!!\n";
            head = delete_end(head);
            break;
        
        case 8:
            display(head);
            break;
        
        case 9:
            system("cls");
            break;
        
        default:
            cout << "\nEnter a correct choice!!!\n";
            break;
        }
    } while (option!=0);
    

    return 0;
}