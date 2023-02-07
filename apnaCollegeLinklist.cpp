#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int val)
    {
        data = val;
        next = NULL;
    }
};
void InserAtTail(node *&head, int val)
{
    node *n = new node(val);
    if (head == NULL)
    {
        head = n;
        return;
    }
    node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next; // poti ber tmop er man next chage korte ci
    }
    tmp->next = n; // ai khane node construtor ar man tmp->next a mane sob shede add kore nichi
}
void insertAthead(node *&head, int val)
{
    node *newnode = new node(val);
    newnode->next = head;
    head = newnode;
}
void print_valu(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << '\n';
}
void search(node *head, int key)
{
    node *temp = head;
    while (temp != NULL)
    {
        if (temp->data == key)
        {

            cout << temp->data << " ";
        }
        
        temp = temp->next;
    }
    cout << '\n';
}
int main()
{
    node *head = NULL;
    // InserAtTail(head,6);
    // InserAtTail(head,5);
    // InserAtTail(head,8);
    // InserAtTail(head,68);
    insertAthead(head, 45);
    insertAthead(head, 46);
    insertAthead(head, 47);
    insertAthead(head, 4);
    insertAthead(head, 42);
    insertAthead(head, 2);
    insertAthead(head, 23);
    insertAthead(head, 238);
    insertAthead(head, 2389);
    insertAthead(head, 23897);
    print_valu(head);
    search(head, 1);
    search(head, 2);
}