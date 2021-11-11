#include <iostream>
using namespace std;
int main()
{
    int s, e, n, temp,result; //2 4 3 7 1 11
    cout<<"enter number of elements";
    cin >> n;
    cout<<"enter result";
    cin>>result;
    s=0;
    e=n-1;
    int a[n];
    cout << "enter array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout<<"sorted array is ";
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {

                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout<<a[i];
    }
    cout<<endl;
    while (a[s]+a[e]!=10)
    {
        if (a[s] + a[e] <10)
        {
            s++;
        }
        else
        {
            e--;
        }
    }
    cout<<"index+1 position is "<<s+1<<" "<<e+1<<endl;

    return 0;
}