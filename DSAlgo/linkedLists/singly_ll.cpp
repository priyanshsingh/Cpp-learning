#include <iostream>
using namespace std;

class Node{
    public:
        int key;
        int data;
        Node* next;

    Node()
    {
        key = 0;
        data = 0;
        next = NULL;
    }
    Node(int k, int d)
    {
        key = k;
        data = d;
    }
};

class SinglyLinkedList{
    public:
        Node* head;

        SinglyLinkedList()
        {
            head = NULL;
        }
        SinglyLinkedList(Node *n)
        {
             head = n; 
        }

//Check if node exists using key value
        Node* nodeExists(int k)
        {
              Node* temp = NULL;

              Node* ptr = head;
              while(ptr!=NULL)
              { 
                  if(ptr->key==k)
                  {
                      temp = ptr; 
                  }
                  ptr = ptr->next;
              }
              return temp;
        }
//2. Append Node - attach new node at last of the list
        void appendNode(Node *n)
        {
            if(nodeExists(n->key)!=NULL)
            {
                cout << "Node Already exists with key value : " << n->key<<". Append node with any other key value."<<endl;
            }
            else
            {
                if(head == NULL)
                {
                    head = n;
                    cout << "Node Appended!!!" << endl;
                }    
                else
                {
                    Node* ptr = head;
                    while(ptr->next!=NULL)
                    { 
                        ptr = ptr->next;
                    }
                    ptr->next  = n;
                    cout << "Node Appended!!!" << endl;
                }
            }
        }
//3. Prepend Node - attach new node at starting of the list
        void prependNode(Node* n)
        {
        if(nodeExists(n->key)!=NULL)
            {
                cout << "Node Already exists with key value : " << n->key<<". Append node with any other key value."<<endl;
            }
            else
            {
                n->next = head;
                head = n;
                    cout << "Node Appended!!!" << endl;
            }
        }
//4. Insert a node afer a particular node in the linked list

        void insertNodeAfter(int k, Node *n)
        {
            Node* ptr = nodeExists(k);
            if(ptr==NULL)
            {
                cout << "No Node exists with key value : " << n->key<<". Insert node with any other key value."<<endl;
            }
            else
            {
                if(nodeExists(n->key)!=NULL)
                {
                    cout << "Node Already exists with key value : " << n->key<<". Append node with any other key value."<<endl;
                }
                else
                {
                    n->next = ptr->next;
                    ptr->next = n; 
                    cout << "Node Inserted!" << endl;
                }
            }
        }
//5. Delete node by unique key
        void deleteNodeByKey(int k)
        {
            if(head == NULL)
            {
                cout << "Singly Linked list already empty. Cant delete" << endl;
            }
            else if(head!=NULL)
            {
                head = head->next;
                cout << "Node unllinked with keys value : " << k << endl;
            }
            else
            {
                Node* temp = NULL;
                Node* prevptr = head;
                Node* currentptr = head->next;
                while(currentptr!=NULL)
                {
                    if(currentptr->key == k)
                    {
                        temp = currentptr;
                        currentptr = NULL;
                    }
                    else{
                        prevptr = prevptr->next;
                        currentptr = currentptr->next;
                    }
                }
                if(temp!=NULL)
                {
                    prevptr->next = temp->next;
                    cout << "Node Unlinked with keys value : " << k << endl;
                }
                else{
                    cout << "Node Dosent exist with key value : " << k <<endl;
                }
            }
        }
//6. Update Node by Key

        void updateNodeByKey(int k, int d)
        {
            Node* ptr = nodeExists(k);
            if(ptr!=NULL)
            {
                ptr->data = d;
                cout << "Node data updated successfully!!!" << endl;
            }
            else{
                cout << "Node dosen;t exist with key value : " << k << endl;
            }
        }

//7. Printing
        void printList()
        {
            if(head == NULL)
            {
                cout<<"No nodes in singly linked list";
            }
            else
            {
                cout<<endl<<"Singly List Values are: ";
                Node* temp = head;

                while(temp!=NULL)
                {
                    cout<<"("<<temp->key<<", "<<temp->data<<") --> ";
                    temp = temp ->next;
                }
            }
        }
        
};

int main()
{

    SinglyLinkedList s;
    int option;
    int key1, k1, data1;
    do
    {
        cout<<"\nWhat operation do you want to perform? Select option number. Enter 0 to exit."<<endl;
        cout << "1. appendNode()"<<endl;
        cout << "2. prependNode()"<<endl;
        cout << "3. insertNodeAfter()"<<endl;
        cout << "4. deleteNodeByKey()"<<endl;
        cout << "5. updateNodeByKey()"<<endl;
        cout << "6. print()"<<endl;
        cout << "7. Clear Screen"<<endl;
        cin>>option;

        Node* n1 = new Node();

        switch(option)
        {
            case 0:
                break;
            case 1:
                cout << "Append Node Operation\nEnter key & data of the node to be appended: "<<endl;
                cin>>key1;
                cin>>data1;
                n1->key = key1;
                n1->data = data1;
                s.appendNode(n1);
                break;
            case 2:
                cout << "Prepend Node Operation\nEnter key & data of the node to be prepended: "<<endl;
                cin>>key1;
                cin>>data1;
                n1->key = key1;
                n1->data = data1;
                s.prependNode(n1);
                break;

            case 3:
                cout << "Insert Node After Operation\nEnter key of existing Node after which you want to insert this New Node: "<<endl;
                cin>>k1;
                cout<<"Enter keys and data of the New Node first: "<<endl;
                cin>>key1;
                cin>>data1;
                n1->key = key1;
                n1->data = data1;
                s.insertNodeAfter(k1, n1);
                break;

            case 4:
                cout << "Delete Node by Key Operation - \nEnter key of node to be deleted: "<< endl;
                cin >> k1;
                s.deleteNodeByKey(k1);

            case 5:
                cout << "Update Node by Key Operation - \nEnter key and new data of node to be updated: "<< endl;
                cin >> k1;
                cin >> data1;
                s.updateNodeByKey(k1, data1);
                break;
            
            case 6:
                s.printList();
                break;

            case 7:
                system("cls");
                break;
            
            default:
                cout << "Enter a correct option number !!!" <<endl;
        }

    } while (option != 0);
    

    return 0;
}