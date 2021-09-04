#include <iostream>
using namespace std;
struct node
{
    int data;
    node *link;
};
struct node *head;
void insert(int x)
{
    node *temp = new node();
    temp->data = x;
    temp->link = head;
    head = temp;
};
void print()
{
    node *temp1 = head;
    cout << "Link is   ";
    while (temp1 != NULL)
    {
        cout << temp1->data << " ";
        temp1 = temp1->link;
    }
    cout << "\n";
};

int main()
{
    head = NULL;
    int n, x;
    cout << "size of list";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "enter number\n";
        cin >> x;
        insert(x);
        print();
    }

    return 0;
}