#include<iostream>
using namespace std;
int numberofones(int n){
    for (int  i = 0; i <n; i++)
    {
        if (n==0)
        {
            return i;
            break;
        }
        else{
            n = n&n-1;
        }
        
    }
    
}


int main(){
    cout<<numberofones(8)<<endl;


    return 0;
}
