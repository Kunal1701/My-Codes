#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter n"<<endl;
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <=n+1- i; j++)
        {
            cout << "*";
        }
        int space=2*i-2;
        for (int k = 1; k <=space; k++)
        {
            cout<<" ";
        }
        for (int j = 1; j <= n+1-i; j++)
        {
            cout << "*";
        }
        

        cout<<endl;
        
    }

    return 0;
}