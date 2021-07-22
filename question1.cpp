#include <iostream>
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
    int N = 1000;
    int minidx[N];
    for (int i = 0; i < N; i++)
    {
        minidx[i] = -1;
    }
    int change = N;
    for (int i = 0; i < n; i++)
    {
        if (minidx[a[i]] != -1)
        {
            change =  minidx[a[i]];
        }
        else
            {
            minidx[a[i]] = i;
        }
        if (change ==N)
        {
            cout << "INVALID" << endl;
        }
        else
        {
            cout << change + 1 << endl;
        }
        return 0;
    }
}