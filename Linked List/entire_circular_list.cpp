#include <iostream>
using namespace std;
struct node
{
    int data;
    node *link;
};
node *tail=NULL;
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
node*create_list(node*tail){
    int n,data;
    cout<<"Enter no. of nodes"<<endl;
    cin>>n;
    if (n==0)
    {
        return tail;
    }
    cout<<"Enter data for 1st element "<<endl;
    cin>>data;
    tail=add_to_empty(data);
    for (int i = 1; i < n; i++)
    {
        cout<<"Enter data for "<<i+1<<" element"<<endl;
        cin>>data;
        tail=add_to_end(tail,data);

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
  tail=create_list(tail);
  print(tail);

    cout << endl;

    return 0;
}