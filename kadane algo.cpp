#include <iostream>
#include <climits>
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
    int sum = 0;
    int largest = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
        if (sum < 0)
        {
            sum = 0;
        }
        largest = max(largest, sum);
    }
    cout << largest << endl;

    return 0;
}