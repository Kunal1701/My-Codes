#include <iostream>
using namespace std;
struct node
{
    int data;
    node *link;
};
node *head = NULL;
node *insert(int data, node *head)
{
    node *temp = new node();
    temp->data = data;
    temp->link = NULL;
    if (head == NULL)
    {
        head = temp;
    }
    else
    {
        node *temp1 = head;
        while (temp1->link != NULL)
        {
            temp1 = temp1->link;
        }
        temp1->link = temp;
    }
    return head;
}
void print(node *head)
{
    if (head == NULL)
    {
        cout << "\n";
        return;
    }

    cout << head->data << " ";
    print(head->link);
}
void reverseprint(node *p)

{
    if (p->link == NULL)
    {
        head = p;
        return;
    }
    reverseprint(p->link);
    p->link->link = p;
    p->link = NULL;
}

int main()
{
    head= insert(2, head);
    head= insert(3, head);
    head= insert(4, head);
    print(head);
    reverseprint(head);
    print(head);
    return 0;
}