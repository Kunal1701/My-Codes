#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cout << "Enter range of numbers to be checked\n";
    cin >> n;
    vector<bool> check(n+1);
    fill(check.begin(), check.end(), true);
    check[0] = false;
    check[1] = false;
    for (int i = 2; i * i < n; i++)
    {
        for (int j = 2 * i; j <=n; j += i)
        {
            check[j] = false;
        }
    }
    for (int i = 0; i < check.size(); i++)
    {
        if (check[i] == true)
        {
            cout << i << " ";
        }
    }

    return 0;
}