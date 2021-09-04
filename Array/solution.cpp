#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    srand(time(0));
    int random;
    for (int i = 0; i < n; i++)
    {
        random = (rand() % 10) + 1;

      a[i]=random;
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << endl;
    }
int largest= a[0];
    for (int i = 0; i < n; i++)
    {
        if (largest < a[i])
        {
            largest = a[i];
        }
    }
    int a2[largest];
    for (int i = 0; i < largest; i++)
    {
        a2[i] = -1;
    }
    int store = largest + 1;

    for (int i = 0; i < n; i++)
    {
        if (a2[a[i]] != -1)
        {
            store = min(store, a2[a[i]]);
            cout<<store<<"  "<<a[i]<<"  "<<i<<endl;   
        }
        else
        {

            a2[a[i]] = i;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<"   ";
    }
    
    cout<<"A2   "<<endl;
    for (int i = 0; i<largest; i++)
    {
        if (a2[i]!=-1)
        {
        cout<<a2[i]<<"and"<<i<<endl;
            
        }
        
    }
    
    if (store == largest + 1)
    {
        cout << "No Repeating Terms" << endl;
    }
    else
    {

        cout << "The index is  " << store << endl;
    }

    return 0;
}
