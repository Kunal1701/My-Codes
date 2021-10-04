#include <iostream>
#include <stack>
using namespace std;
void reversel(char *c, int n)
{
    stack<char> s;
    for (int i = 0; i < n; i++)//loop for push
    {
        s.push(c[i]);
    }
    for (int i = 0; i < n; i++)//loop for pop
    {
        c[i]=s.top();
        s.pop();
    }
    
}
int main()
{
    char c[50];
    int n;
    cout << "enter number of elements" << endl;
    cin>>n;
    cout << "enter string" << endl;
    for (int i = 0; i < n; i++)//for string input
    {
        cin>>c[i];
    }
    
    reversel(c, strlen(c));//for string reversel
    cout<<c<<endl;
    return 0;
}