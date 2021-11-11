#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cout << "enter size of array" << endl;
    cin >> n;
    int a[n];
    cout<<"enter array"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int Xor = 0;
    for (int i = 0; i < n; i++)
        Xor = Xor ^ a[i];
    int set_bit;
    set_bit = Xor & ~(Xor - 1);
    vector<int> set;
    vector<int> unset;
    for (int i = 0; i < n; i++)
    {
        if (set_bit & a[i])
        {
            set.push_back(a[i]);
        }
        else
        {
            unset.push_back(a[i]);
        }
    }
    int temp = Xor;
    for (int i = 0; i < set.size(); i++)
    {
        temp = temp ^ set[i];
    }
    int b = temp;
    int c = Xor ^ temp;
    cout << c << " " << b << endl;
    return 0;
}
