#include <iostream>
using namespace std;
struct node
{
    int data;
    node *link;
};
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
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->link;
    }
    cout << "\n";
}
node *reverse(node *head)
{
    node *current = head;
    node *previous = NULL;
    node *next;
    while (current != NULL)
    {
        next = current->link;
        current->link = previous;
        previous = current;
        current = next;
    }
    head = previous;
    return head;
}

int main()
{
    node *head = NULL;
    head = insert(2, head);
    head = insert(3, head);
    head = insert(4, head);
    print(head);
    head = reverse(head);
    print(head);
    return 0;
}