#include<iostream>
using namespace std;
bool powerof2(int n){
    if (n!=0){
    return !(n & n-1);}
    else{
        return 0;
    }
}
int main(){
    cout<<powerof2(8)<<endl;
    


    return 0;
}