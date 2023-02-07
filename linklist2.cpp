#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int val;
    node *next;
    node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
void insertAthead(node *&head, int value)
{
    node *newnode = new node(value);
    if (head == NULL)
    {
        head = newnode;
        return;
    }
    newnode->next = head;
    head = newnode;
}
void insertAttail(node *&head, int value)
{
    node *newnode = new node(value);
    if (head == NULL)
    {
        head = newnode;
        return;
    }
    node* tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = newnode;
}
void Print_linklist(node *head)
{
    if (head == NULL)
    {
        return;
    }
    while (head != NULL)
    {
        cout << head->val << " ";
        head = head->next;
    }
}
int main()
{
    node *head = NULL;
    // insertAthead(head, 23);
    // insertAthead(head, 24);
    // insertAthead(head, 34);
    // insertAthead(head, 84);
    // Print_linklist(head);
    insertAttail(head, 4);
    insertAttail(head, 14);
    insertAttail(head, 94);
    Print_linklist(head);
}