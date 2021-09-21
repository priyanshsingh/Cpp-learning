#include <iostream>
#include <stdlib.h>
using namespace std;

struct node
{
    int num;
    struct node *next;
};
 
void create(struct node **);
void tocircular(struct node **);
void release(struct node **);
void change(struct node **, int);
void display(struct node *);
 
int main()
{
    struct node *p = NULL;
    int num;
 
    cout << "Enter data into the list\n";
    create(&p);
    tocircular(&p);
    cout << "Circular list generated\n";
    display(p);
    cout << "Enter node position to interchange with it's adjacent: ";
    cin >> num;
    change(&p, num - 2);
    cout << "After interchanging, ";
    display(p);
    release (&p);
 
    return 0;
}
 
void tocircular(struct node **p)
{
    struct node *rear;
 
    rear = *p;
    while (rear->next != NULL)
    {
        rear = rear->next;
    }
    rear->next = *p;
}
 
void change(struct node **head, int num)
{
    struct node *p, *q, *r;
 
    p = q = r = *head;
    p = p->next->next;
    q = q->next;
    while (num != 0)
    {
        r = q;
        q = p;
        p = p->next;
        num--;
    }
    r->next = p;
    q->next = p->next;
    p->next = q;   
}
 
void create(struct node **head)
{
    int c, ch;
    struct node *temp, *rear;
 
    do
    {
        cout << "Enter number: ";
        cin >> c;
        temp = (struct node *)malloc(sizeof(struct node));
        temp->num = c;
        temp->next = NULL;
        if (*head == NULL)
        {
            *head = temp;
        }
        else
        {
            rear->next = temp;
        }
        rear = temp;
        cout << "Do you wish to continue [1/0]: ";
        cin >> ch;
    } while (ch != 0);
    cout << endl;
}
 
void display(struct node *head)
{
    struct node *temp = head;
    cout << "Displaying the list elements\n";
    cout << "\t" << temp->num << "\t";
    temp = temp->next;
    while (head != temp)
    {
        cout << "\t" << temp->num <<"\t";
        temp = temp->next;
    }
    printf("\n");
}
 
void release(struct node **head)
{
    struct node *temp = *head;
    temp = temp->next;
    (*head)->next = NULL;
    (*head) = temp->next;
    while ((*head) != NULL)
    {
        free(temp);
        temp = *head;
        (*head) = (*head)->next;
    }
}