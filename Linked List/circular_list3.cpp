#include <iostream>
using namespace std;
struct node
{
    int data;
    node *link;
};
node *tail;
node *add_to_empty(int data)
{
    node *temp = new node();
    temp->data = data;
    temp->link = temp;
    return temp;
}
node *add_to_beg(node *tail, int data)
{
    node *newp = new node();
    newp->data = data;
    newp->link = tail->link;
    tail->link = newp;
    return tail;
}
node *add_to_end(node *tail, int data)
{

    node *temp = new node();
    node *firstnode;
    temp->data = data;
    firstnode = tail->link;
    tail->link = temp;
    temp->link = firstnode;
    tail = temp;
    return tail;
}
node *add_at_n(node *tail, int data, int position)
{
    node *temp = new node();
    temp->data = data;
    temp->link = temp;
    node *ptr = tail->link;
    while (position > 1)
    {
        ptr = ptr->link;
        position--;
    }
   temp->link=ptr->link;
   ptr->link=temp;
   if (ptr==tail)
   {
       tail=tail->link;
   }
   
   return tail;
}
void print(node *tail)
{
    node *ptr = tail->link;
    do
    {
        cout << ptr->data << " ";
        ptr = ptr->link;
    } while (ptr != tail->link);
}

int main()
{
    tail = add_to_empty(4);
    tail = add_to_beg(tail, 3);
    tail = add_to_beg(tail, 2);
    tail = add_to_beg(tail, 1);
    print(tail);
    tail = add_to_end(tail, 5);
    cout << endl;
    print(tail);
    tail = add_at_n(tail, 12, 1);
    //node will be added at position+1
    cout << endl;
    print(tail);

    cout << endl;

    return 0;
}