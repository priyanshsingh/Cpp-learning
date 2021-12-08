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
        ptr=ptr->next;
    }
}

struct Node * insertAtBeginning(int value, struct Node * head){
    cout << "insertAtBeginning() funciton called!\n\n";
    struct Node * ptr = new Node();
    ptr->data = value;
    ptr->next = head;
    return ptr;
}

struct Node * insertInBetween(int value, int index, struct Node * head){
    cout << "insertInBetween() funciton called!\n\n";
    struct Node * ptr = new Node();
    struct Node * p = head;
    int i = 0;
    while (i!=index-1)
    {
        p=p->next;
        i++;
    }

    ptr->data = value;
    ptr->next = p->next;
    p->next = ptr;
    return head;
}


struct Node * insertAtEnd(int value, struct Node * head){
    cout << "insertAtEnd() funciton called!\n\n";
    struct Node * ptr = new Node();
    struct Node * p = head;
    while (p->next!=NULL)
    {
        p=p->next;
    }
    ptr->data = value;
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
    struct Node * head = new Node();   
    struct Node * second = new Node();   
    struct Node * third = new Node();   
    struct Node * fourth = new Node();   
    struct Node * fifth = new Node();   

    head->data = 10;
    head->next = second;

    second->data = 111;
    second->next = third;

    third->data = 2222;
    third->next = fourth;
 
    fourth->data = 33333;
    fourth->next = fifth;

    fifth->data = 4444;
    fifth->next = NULL;

    display_ll(head);

    int item, choice, index;
    do
    {
        cout << "\n\n***********************Linked List Data Structure!!!***********************\n\n";
        cout << "Enter a valid choice from the below given options. Enter 0 to exit\n\n";
        cout << "1. insertAtBeginning()" << endl;
        cout << "2. insertInBetween()" << endl;
        cout << "3. insertAtEnd()" << endl;
        cout << "4. insertAtIndex()" << endl;
        cout << "5. display_ll()" << endl;
        cout << "6. ClearScreen()" << endl << endl;
        cin >> choice;

        switch (choice)
        {
        case 0:
            break;
        
        case 1:
            cout << "Enter the number you want to be inserted = ";
            cin >> item;
            head = insertAtBeginning(item, head);
            break;
        
        case 2:
            cout << "Enter the number you want to be inserted = ";
            cin >> item;
            cout << "Enter the index = ";
            cin >> index;
            head = insertInBetween(item, index, head);
            break;
        
        case 3:
            cout << "Enter the number you want to be inserted = ";
            cin >> item;
            head = insertAtEnd(item, head);
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
            cout << "\nEnter a valid option from 1 to 6!!!\n\n";
            break;
        }
    } while (choice!=0);
    
    return 0;
}