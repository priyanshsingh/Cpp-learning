#include <bits/stdc++.h>
using namespace std;
struct Node {
	int data;
	struct Node* next;
};
Node* newNode(int key)
{
	Node* temp = new Node;
	temp->data = key;
	temp->next = NULL;
	return temp;
}

void reverselist(Node** head)
{
	Node *prev = NULL, *live = *head, *next;

	while (live) {
		next = live->next;
		live->next = prev;
		prev = live;
		live = next;
	}

	*head = prev;
}
void printlist(Node* head)
{
	while (head != NULL) {
		cout << head->data << " ";
		if (head->next)
			cout << "-> ";
		head = head->next;
	}
	cout << endl;
}

void rearrange(Node** head)
{
	Node *slow = *head, *fast = slow->next;
	while (fast && fast->next) {
		slow = slow->next;
		fast = fast->next->next;
	}


	Node* head1 = *head;
	Node* head2 = slow->next;
	slow->next = NULL;

	reverselist(&head2);

	*head = newNode(0);
	Node* live = *head;
	while (head1 || head2) {
		if (head1) {
			live->next = head1;
			live = live->next;
			head1 = head1->next;
		}
		if (head2) {
			live->next = head2;
			live = live->next;
			head2 = head2->next;
		}
	}
	*head = (*head)->next;
}
int main()
{
	Node* head = newNode(1);
	head->next = newNode(2);
	head->next->next = newNode(3);
	head->next->next->next = newNode(4);
	head->next->next->next->next = newNode(5);

	printlist(head);
	rearrange(&head);
	printlist(head);
	return 0;
}
