#include <iostream>
using namespace std;
int main(){
int n;
cout<<"enter no. of rows"<<endl;
cin>>n;
for (int i = 1; i <=n; i++)
{
    for (int j = 1; j <=n-i; j++)
    {
      if (i==1||j==1||j==n-i)
      {
          cout<<"*";
      }
      else{cout<<" ";}
        
    }
    cout<<endl;
    
}


return 0;
}