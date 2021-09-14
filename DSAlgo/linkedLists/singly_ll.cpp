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
                    while(ptr->key!=NULL)
                    { 
                        ptr = ptr->next;
                    }
                    ptr->next  = n;
                    cout << "Node Appended!!!" << endl;
                }
            }
        }
//3. Prepend Node - attach new node at starting of the list
        void prependNode()
        {

        }
};

int main()
{

    return 0;
}