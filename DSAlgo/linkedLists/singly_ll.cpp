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

        }
};

int main()
{

    return 0;
}