#include <iostream>
#include <stack>
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
void reversel()
{
    node *temp = head;
    if (temp == NULL)
    {
        return;
    }
    stack<node *> s;
    while (temp != NULL)
    {
        s.push(temp);
        temp = temp->link;
    }
    temp = s.top();
    head = temp;
    s.pop();
    while (!s.empty())
    {
        temp->link = s.top();
        s.pop();
        temp = temp->link;
    }
    temp->link = NULL;
}

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
    reversel();
    print();

    return 0;
}