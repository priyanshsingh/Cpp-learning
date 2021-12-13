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
    cout << "\nInsert At Beginning Function called!!!\n";
    struct Node * ptr = new Node();
    ptr->data = item;
    ptr->next = head;
    return ptr;
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
            break;
        
        case 4:
            break;
        
        case 5:
            break;
        
        case 6:
            break;
        
        case 7:
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