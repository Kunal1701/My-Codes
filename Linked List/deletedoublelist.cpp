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
    cout << endl;
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
    cout << "Enter data for node 1" << endl;
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
node *deleteathead(node *head)
{
    head = head->next;
    free(head->prev);
    return head;
}
node *deleteatend(node *head)
{
    node *ptr = head;
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    node *ptr2 = ptr->prev;
    ptr2->next = NULL;
    free(ptr);
    ptr = NULL;

    return head;
}
node *deleteatn(node *head)
{
    node *ptr = head;
    int position;
    cout << "Enter position" << endl;
    cin >> position;
    while (position > 1)
    {
        ptr = ptr->next;
        position--;
    }
    node *ptr2 = ptr->prev;
    ptr2->next = ptr->next;
    ptr->next->prev = ptr2;
    free(ptr);
    ptr = NULL;

    return head;
}

int main()
{
    head = createlist(head);
    print();
    head = deleteathead(head);
    print();
    head = deleteatend(head);
    print();
    head = deleteatn(head);
    print();

    cout << endl;

    return 0;
}