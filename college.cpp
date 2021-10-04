#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "enter number" << endl;
    cin >> a;
    int last = a;
    last %= 10;
    while (a > 1)
    {
        a /= 10;
    }
    int sum = a + last;
    cout << sum << endl;
    return 0;
}