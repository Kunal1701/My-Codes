#include <iostream>
#include <math.h>
#include <string>
using namespace std;
int main(){
    int n;
    cout << "enter size of array" << endl;
    cin >> n;
    int a[n];
    int bits[32]={0};
    
    cout<<"enter array"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int temp,setbitindex,mask=1;
    for (int i = 0; i < n; i++)
    {
        temp=a[i];
        //setbitindex=log2(temp&-temp);
        //bits[setbitindex]+=1; 
     while (true)
     {
         int test=temp&mask;
         if (tes)
         {
             /* code */
         }
         
         mask=1<<1;
     }
     
      

        
        //cout<<setbitindex;
    }
    for (int i = 0; i < 32; i++)
    {
        cout<<bits[i];
    }
    
    for (int i = 0; i < 32; i++)
    {
        if (bits[i]%3==0)
        {
            bits[i]=0;
        }
        else{
            bits[i]=1;
        }
        
    }
    /*for (int i = 0; i < 32; i++)
    {
     cout<<bits[i]<<" ";   
    }*/
    
    int sum=0;
   /*for (int i = 0; i < 32; i++)
   {
       sum+=bits[i]*pow(2,i);
   }
   cout<<sum<<endl;*/
   

    

    
    
return 0;
}