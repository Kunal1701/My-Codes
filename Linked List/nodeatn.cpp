#include <iostream>
using namespace std;
struct node
{
    int data;
    node *link;
};
struct node *head;
void insert(int data, int n)
{
    node *temp = new node();
    temp->data = data;
    temp->link = NULL;
    if (n == 1)
    {
        (*temp).link = head;
        head = temp;
        return;
    }
    node *temp1 = head;
    for (int i = 0; i < n - 2; i++)
    {
        temp1 = temp1->link;
    }
    temp->link = temp1->link;
    temp1->link = temp;
};
void print()
{
    node *temp2 = head;
    while (temp2 != NULL)
    {
        cout << temp2->data << " ";
        temp2 = temp2->link;
    }
    cout << "\n";
};

int main()
{
    head = NULL;
    insert(2, 1);
    insert(3, 2);
    insert(4, 2);
    print();
    return 0;
}