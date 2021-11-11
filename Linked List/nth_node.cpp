#include <iostream>
using namespace std;
struct node
{
    int data;
    node*link;
};
node*head=NULL;
node* add_at_head(node*head,int x){
    node*temp=new node();
    temp->data=x;
    temp->link=head;
    head=temp; 
    return head;
}
void node_at_n(node*head,int location){
    node*temp=head;
    for (int i = 0; i < location-1; i++)
    {
        temp=temp->link;
    }
    cout<<temp->data<<endl;
    
}
void deleted(node*head){
    node*prev=head;
    node*next=head;
    while (next!=NULL)
    {
        next=next->link;
        free(prev);
        prev=next;
    }
    head=NULL;
    cout<<"\nDeleted";
}
void display(node*head){
    node*temp=head;
    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->link;
    }
    
}


int main(){
    head=add_at_head(head,4);
    head=add_at_head(head,55);
    head=add_at_head(head,2);
    head=add_at_head(head,1);
    display(head);
    deleted(head);
    //display(head);

    //node_at_n(head,3);

cout<<endl;
return 0;
}