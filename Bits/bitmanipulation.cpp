#include <iostream>
using namespace std;
int getbit(int num, int pos)
{
    if ((num & (1 << pos)) != 0)
    {
        return 1;
    }
    return 0;
}


int setbit(int num, int pos)
{
    return (num | (1 << pos));
}

int unsetbit(int num,int pos){
    int mask = ~(1<<pos);
    return (num&mask);
}

int updatebit(int num,int pos,int value){
    int mask = ~(1<<pos);
    num = num & mask;
    return (num|(value<<pos));
}


int main()
{
    int num;
    cout << "enter num" << endl;
    cin >> num;
    int pos;
    int value;
    cout << "enter position " << endl;
    cin >> pos;
    cin>>value;
    //cout << getbit(num, pos) << endl;
    //cout << setbit(num, pos) << endl;
    //cout<<unsetbit(num,pos)<<endl;
    cout<<updatebit(num,pos,value)<<endl;
    return 0;
}