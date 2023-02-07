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
// poti ta element print korar jonno
    void travas()
    {
        node *a = head;
        while (a != NULL)
        {
            cout << a->next << "  ";
            a = a->next;
        }
    }
// head a valu insert korar jonno
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
    // taile a valu insert korar jonno
    void insertAttail(int x)
    {
        node *a = createNewnode(x);

        if (head == NULL)
        {
            head = a;
            return;
        }
        node *tmp = head;
        while (tmp->next != NULL)
        {
            tmp = tmp->next;
        }
        
        tmp->next = a;
    }
// poti ta element print korar jonno

    void Travas()
    {
        node *a = head;
        while (a != NULL)
        {
            cout << a->data << " ";
            a = a->next;
        }
        cout << "\n";
    }
    int searchValu(int valu){
        node* a = head;
        int index = 0;
        while (a!= NULL)
        {
            if(a->data == valu){
                return index;
                cout << a->data;
            }
            a = a->next;
            index++;
        }
        return -1;
        
    }
};
int main()
{
    Linklist l;
    l.inserAtHead(10);
    l.inserAtHead(20);
    l.insertAttail(12);
    l.inserAtHead(201);
    l.insertAttail(112);
    l.inserAtHead(220);
    l.insertAttail(120);
    l.Travas();
    cout << l.searchValu(8);
}