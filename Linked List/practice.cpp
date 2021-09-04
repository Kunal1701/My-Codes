#include <iostream>
using namespace std;
struct node
{
    int data;
    node *link;
};
node *head;
void insertatstart(int x)
{
    node *temp = new node();
    temp->data = x;
    temp->link = head;
    head = temp;
}
void print()
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->link;
    }
}
void insertatend(int x)
{
    node *ptr = head;
    while (ptr->link != NULL)
    {
        ptr = ptr->link;
    }
    node *temp1 = new node();
    temp1->data = x;
    temp1->link = NULL;
    ptr->link = temp1;
}

int main()
{
    head = NULL;
    insertatstart(4);
    insertatstart(3);
    insertatstart(2);
    insertatstart(1);
    insertatend(5);
    print();
    cout << endl;

    return 0;
}