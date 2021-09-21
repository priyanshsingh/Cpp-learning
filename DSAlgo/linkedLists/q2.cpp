/*
Singly Linked Lists
1. appendNode
2. prependNode
3. insertNodeAfter
4. deleteNodeBefore
5. updateNodeByKey
6.print
*/
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

        void multiply()
        {
            if(head == NULL)
            {
                cout<<"No nodes in singly linked list";
            }
            else
            {
                cout<<endl<<"(Key, Node data * 10): ";
                Node* temp = head;

                while(temp!=NULL)
                {
                    cout<<"("<<temp->key<<", "<<10 * temp->data<<") --> ";
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
        cout << "2. multiply by 10()"<<endl;
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
                s.multiply();
                break;
            
            default:
                cout << "Enter a correct option number !!!" <<endl;
        }

    } while (option != 0);
    

    return 0;
}