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

void print()
{
    node *temp = head;
    cout << "List is -> ";
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
node *createlist(node *head)
{
    int n, data;
    cout << "enter the number of nodes" << endl;
    cin >> n;
    if (n == 0)
    {
        return head;
    }
    cout << "Enter data for 1 node" << endl;
    cin >> data;
    head = addtoempty(head, data);
    for (int i = 1; i < n; i++)
    {
        cout << "Enter data for " << i + 1 << " node" << endl;
        cin >> data;
        head = addatend(head, data);
    }
    return head;
}
node *reverse(node *head)
{
    node *ptr1 = head;
    node *ptr2 = head->next;
    ptr1->next = NULL;
    ptr1->prev = ptr2;
    while (ptr2 != NULL)
    {
        ptr2->prev = ptr2->next;
        ptr2->next = ptr1;
        ptr1 = ptr2;
        ptr2 = ptr2->prev;
    }
    head = ptr1;
    return head;
}

int main()
{
    head = createlist(head);
    print();
    cout << endl;
    head = reverse(head);
    print();
    cout << endl;

    return 0;
}