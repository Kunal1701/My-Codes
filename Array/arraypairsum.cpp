#include <iostream>
using namespace std;

bool pairsum(int a[], int n, int k)
{
    int low = 0;
    int high = n - 1;

    while (low < high)
    {
        if (a[low] + a[high] == k)
        {
            cout << low << " " << high << endl;
            return true;
        }
        else if (a[low] + a[high] > k)
        {
            high--;
        }
        else
        {
            low++;
        }
    }

    return false;
}

int main()
{
    cout << "ENTER SIZE OF ARRAY" << endl;
    int n;
    cin >> n;
    cout << "ENTER ARRAY" << endl;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "SUM TO BE REQUIRED IS  " << endl;
    int k;
    cin >> k;
    int temp;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    cout << pairsum(a, n, k) << endl;

    return 0;
}