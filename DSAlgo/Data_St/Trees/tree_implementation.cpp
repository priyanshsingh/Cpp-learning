#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

int main(){
    struct Node * root = new Node(5);
    root->left = new Node(10);    
    root->right = new Node(15);    

    root->left->left = new Node(7);    


    return 0;
}