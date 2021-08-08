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
        temp->link = head;
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
void erase(int n)
{

    node *temp = head;
    if (n == 1)
    {
        head = temp->link;
        free(temp);
        return;
    }

    for (int i = 0; i < n - 2; i++)
    {
        temp = temp->link;
    }
    node *temp1 = temp->link;
    temp->link = temp1->link;
    free(temp1);
};

int main()
{
    head = NULL;
    insert(2, 1);
    insert(3, 2);
    insert(4, 3);
    int n;
    cout << "enter position to erase node" << endl;
    cin >> n;
    erase(n);
    print();
    return 0;
}