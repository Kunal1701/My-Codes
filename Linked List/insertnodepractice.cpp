#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;
};
node *head;
void insert(int x, int n)
{

    node *temp = new node();
    temp->data = x;
    if (n == 1)
    {

        temp->next = head;
        head = temp;
        return;
    }
    node*temp1=head;


    for (int i = 0; i < n-2; i++)
    {
        temp1=temp1->next;    
    }
    temp->next=temp1->next;
    temp1->next=temp;
    
};
void print(){

    node*temp=head;
    while (temp!=0)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<"\n";
    

};

int main()
{
    head = NULL;
    insert(1,1);
    insert(2,2);
    insert(3,1);
    print();

    return 0;
}