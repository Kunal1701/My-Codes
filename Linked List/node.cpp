#include <iostream>
using namespace std;


int main()
{
    struct node
    {
        int data;
        node*link;
    };
    
    node *a;
    a = NULL;
    node*temp;
    temp = new node();

    temp->data = 2;
    temp->link = NULL;
    a = temp;

    temp = new node();
    temp->data=4;
    temp->link=NULL;

    node*temp1=a;

    while (temp1->link!=NULL)
    {
        temp1=temp1->link;
    }
    temp1->link=temp;
    

    while (temp1!=NULL)
    {
        cout<<temp1->data<<endl;
        temp1=temp1->link;
    }
    

    return 0;
}