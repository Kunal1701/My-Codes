#include <iostream>
#include<climits>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int N = INT_MAX;
    bool check[N];
    for (int i = 0; i < N; i++)
    {
        check[i] = false;
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] >= 0)
        {
            check[a[i]] = true;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout<<check[i];
    }
    
    int store = -1;
    for (int i = 1; i < N; i++)
    {
        if(check[i]==false){
            store = i;
            break;
        }
    }
    cout<<"store is  "<<endl;
    cout<<store<<endl;
   /* if (store==-1)
    {
        cout<<"no missing term";
    }
    else{
    cout<<store<<endl;

    }*/
    

    return 0;
}