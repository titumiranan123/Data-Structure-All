#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *next;
};
class Linklist
{
public:
    node *head;
    Linklist()
    {
        head = NULL;
    }
    // create a new nide with data
private:
    node *createNewnode(int x)
    {
        node *newnode = new node;
        newnode->data = x;
        newnode->next = NULL;
        return newnode;
    }

public:
    void inserAtHead(int x)
    {
        node *a = createNewnode(x);
        if (head == NULL)
        {
            head = a;
            return;
        }
        a->next = head;
        head = a;
    }
    void Travas(){
        node*a = head;
        while (a!= NULL)
        {
            cout << a->data<<" ";
            a = a->next;
        }
        cout<<"\n";
        
    }
};
int main()
{
    Linklist l;
    l.inserAtHead(10);
    l.inserAtHead(20);
    l.Travas();
}