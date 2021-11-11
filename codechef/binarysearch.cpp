#include <iostream>
// #include<bits/stdc++.h>
#include <vector>

using namespace std;
int main()
{
    int n;
    cout<<"enter N\n";
    cin>>n;
    vector<int> v(n);
    int data;
    cout<<"enter data\n";
    for (int i = 0; i < n; i++)
    {
        cin >> data;
        v.push_back(data);
    }
    sort(v.begin(), v.end());
    int s = 0, e = 8, target = 5;
    int flag = 1;
    while (s <= e)
    {
        int m = (s + e) / 2;
        if (v[m]== target)
        {
            flag = 0;
            cout << "YES";
            break;
        }
        else if (v[m] < target)
        {
            s = m + 1;
        }
        else
        {
            e = m - 1;
        }
    }
    if (flag)
    {
        cout << "Element is not present" << endl;
    }

    return 0;
}