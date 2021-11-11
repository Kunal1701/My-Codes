#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cout << "Enter number of elements" << endl;
    cin >> n;
    vector<int> v;
    cout << "Enter elements" << endl;
    for (int i = 0; i < n; i++)
    {
        int data;
        cin >> data;
        v.push_back(data);
    }
    int current_profit = 0, max_profit = 0, min_price = INT_MAX;
    for (int i = 0; i < v.size(); i++)
    {
        current_profit = v[i] - min_price;
        max_profit = max(max_profit, current_profit);
        min_price = min(min_price, v[i]);
    }
    cout << max_profit << endl;

    return 0;
}