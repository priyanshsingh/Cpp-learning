#include <iostream>
using namespace std;

struct Node{
    int data;
    struct Node * next;
};

void display(struct Node * ptr)
{
    while (ptr!=NULL)
    {
        cout << ptr->data << " --> ";
        ptr=ptr->next;
    }
}

struct Node * insert_beginning(struct Node * head, int value)
{
    cout << "insert_beginning() function called successfully!!!\n";
    struct Node * ptr = new Node();
    ptr->data = value;
    ptr->next = head;
    return ptr;
}

int main(){
    struct Node * head = new Node();
    struct Node * second = new Node();
    struct Node * third = new Node();
    struct Node * fourth = new Node();
    struct Node * fifth = new Node();

    head->data = 100;
    head->next = second;

    second->data = 200;
    second->next = third;

    third->data = 300;
    third->next = fourth;

    fourth->data = 400;
    fourth->next = fifth;

    fifth->data = 500;
    fifth->next = NULL;

    int value, choice, index;

    do
    {
        cout << "\n\nSelect from the Options below!!!\nEnter 0 to exit.\n\n";
        cout << "1. Insert at Beginning" << endl;
        cout << "2. Insert in Between" << endl;
        cout << "3. Insert at End" << endl;
        cout << "4. Insert at Index" << endl;
        cout << "5. Delete First Node" << endl;
        cout << "6. Insert at Index" << endl;
        cout << "7. Insert at End" << endl;
        cout << "8. Display" << endl;
        cout << "9. ClearScreen" << endl;
        cin >> choice;

        switch (choice)
        {
        case 0:
            break;
        
        case 1:
            cout << "Enter the number to be inserted = ";
            cin >> value;
            head = insert_beginning(head, value);
            break;
        
        case 2:
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
            cout << "\n\nEnter a valid choice from 1-9.\n\n";
            break;
        }
    } while (choice!=0);
    

    display(head);
    return 0;
}