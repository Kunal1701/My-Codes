#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cout << "enter number of rounds";
    cin >> n;
    vector<int> si;
    vector<int> ti;
    vector<int> diff;
    int tielement;
    int sielement;
    cout << "Enter scores of player 1" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> sielement;
        si.push_back(sielement);
    }
    cout << "Enter scores of player 2" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> tielement;
        ti.push_back(tielement);
    }
    for (int i = 0; i < n; i++)
    {
        int difference;
        difference = si[i] - ti[i];
        diff.push_back(difference);
    }
    sort(diff.begin(), diff.end());
    diff.front() = -diff.front();

    if (diff.back() > diff.front())
    {
        cout << "1 " << diff.back() << endl;
    }
    else if (diff.back() < diff.front())
    {
        cout << "2 " << diff.front() << endl;
    }

    return 0;
}
