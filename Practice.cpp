#include <iostream>
using namespace std;

struct Rectangle{
    int length;
    int breadth;
};

int main(){

    struct Rectangle *p;
    p= new Rectangle;
    p->length=10;
    p->breadth=20;
    int v= (p->breadth)*(p->length);
    cout<<v<<endl;

    return 0;
}