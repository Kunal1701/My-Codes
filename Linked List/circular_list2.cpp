#include <iostream>
using namespace std;
struct node
{
    int data;
    node*link;
};
node*tail;
node*add_to_empty(int data){
    node*temp=new node();
    temp->data=data;
    temp->link=temp;
    return temp;
}
node*add_to_beg(node*tail,int data){
    node*newp=new node();
    newp->data=data;
    newp->link=tail->link;
    tail->link=newp;
    return tail;
}
node*add_to_end(node*tail,int data){

    node*temp=new node();
    node*firstnode;
    temp->data=data;
    firstnode=tail->link;
    tail->link=temp;
    temp->link=firstnode;
    tail=temp;
    return tail;
}
void print(node*tail){
    node*ptr=tail->link;
   do
   {
       cout<<ptr->data<<" ";
       ptr=ptr->link;
   } while (ptr!=tail->link);
   
}



int main(){
    tail=add_to_empty(4);
    tail=add_to_beg(tail,3);
    tail=add_to_beg(tail,2);
    tail=add_to_beg(tail,1);
    print(tail);
    tail=add_to_end(tail,5);
    tail=add_to_end(tail,6);
    cout<<endl;
    print(tail);

    cout<<endl;

return 0;
}