#include<iostream>
using namespace std;

struct Node{
    int data;
    struct Node *next;
};
void showList(struct Node* ptr)
{
    while(ptr!=NULL){
    cout<<ptr->data<<endl;
    ptr=ptr->next;
    }
}

int main(){
    int n=0;
    cout<<"Enter the number of Linked List nodes to be created!"<<endl;
    cin>>n;
    struct Node *head=new Node();
    struct Node *prev=new Node();
    prev=head;    
    for(int i=0;i<n;i++){
        struct Node *node=new Node();
        prev->next=node;
        cout<<"Enter data for "<<i+1<<" Node"<<endl;
        cin>>node->data;
        prev=prev->next;
    }
    prev->next=NULL;
    cout<<endl;
    cout<<"Linked List is:"<<endl;
    showList(head->next);
return 0;
}