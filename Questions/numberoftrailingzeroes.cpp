#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter number" << endl;
    cin >> n;
    int res = 0;
    for (int i = 5; i <= n; i = i * 5)
    {
        res = res + (n/i);
    }
    cout << res<<endl;
    return 0;
}