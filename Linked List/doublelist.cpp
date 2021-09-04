#include <iostream>
using namespace std;
struct node
{
    node *prev;
    int data;
    node *next;
};
node *head = NULL;
node *addtoempty(node *head, int x)
{
    node *temp = new node();
    temp->data = x;
    temp->next = NULL;
    temp->prev = NULL;
    head = temp;
    return head;
}
node *addatbeg(node *head, int x)
{
    node *temp = new node();
    temp->data = x;
    temp->next = NULL;
    temp->prev = NULL;
    temp->next = head;
    head->prev = temp;
    head = temp;
    return head;
}
node *addatend(node *head, int x)
{
    node *temp = new node();
    temp->data = x;
    temp->next = NULL;
    temp->prev = NULL;
    node *tp;
    tp = head;
    while (tp->next != NULL)
    {
        tp = tp->next;
    }
    tp->next = temp;
    temp->prev = tp;
    return head;
}
node *insertatn(node *head, int x, int position)
{

    node *temp = NULL;
    temp = addtoempty(head, x);
    node *ptr = head;
    while (position != 1)
    {
        ptr = ptr->next;
        position--;
    }
    if (ptr->next == NULL)
    {
        ptr->next = temp;
        temp->prev = ptr;
    }
    
    else
    {

        node *ptr2 = NULL;
        ptr2 = ptr->next;
        ptr->next = temp;
        temp->prev = ptr;
        ptr2->prev = temp;
        temp->next = ptr2;
    }
    return head;
}

void print()
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main()
{
    head = addtoempty(head, 2);
    head = addatbeg(head, 1);
    head = addatend(head, 3);
    head = insertatn(head, 7, 2);
    //above line node will be inserted position+1
    print();
    cout << endl;

    return 0;
}