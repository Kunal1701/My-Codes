#include <iostream>
using namespace std;
int gcd(int a,int b){
    if (a>b)
    {
        if (b==0) return a;
        else
        return gcd(b,a%b);
        
    }
     else if (b>a)
    {
        if (a==0) return b;
        else
        return gcd(a,b%a); 
    }
    
    
}
int main(){
    int a,b;
    cout<<"enter a and b"<<endl;
    cin>>a>>b;
    cout<<gcd(a,b)<<endl;
return 0;
}