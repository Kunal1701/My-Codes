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
    int sum;
    int s = 12;
    for (int i = 0; i < n; i++)
    {
        sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += a[j];
            if (sum >= s)
            {
                if (sum==s)
                {
                    cout<<"Final position is  "<<j+1<<endl;
                    break;
                }
                break;
                
            }
        }
        if (sum == s)
        {
            cout<<"First position is   "<<i+1<<endl;
            break;
        }
        else
        {
            continue;
        }
    }
//    cout << "sum is  " << sum << endl;

    return 0;
}
