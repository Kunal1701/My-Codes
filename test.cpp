#include <iostream>
using namespace std;

int main()
{
    int d;
    int m;
    int y;
    cout << "Enter Date" << endl;
    cin >> d >> m >> y;
    cout << "Date is " << d << "/" << m << "/" << y << endl;
    if (d > 0 && d < 28)
    {
        d += 1;
    }
    if (d == 28)
    {
        if (m == 2)
        {
            if ((y % 4 == 0) && (y % 400 == 0) && (y % 100 != 0))
            {
                d = 29;
            }
            else
            {
                d = 1;
                m = 3;
            }
        }
        else
        {
            d += 1;
        }
    }
    if (d == 29)
    {
        if (m == 2)
        {
            d = 1;
            m = 3;
        }
        else
        {
            d += 1;
        }
    }
    if (d == 30)
    {
        if ((m == 1) || (m == 3) || (m == 5) || (m == 7) || (m == 8) || (m == 10) || (m == 12))
        {
            d += 1;
        }
        else
        {
            d = 1;
            m += 1;
        }
    }
    if (d == 31)
    {
        d = 1;
        if (m == 12)
        {
            m = 1;
            y += 1;
        }
        else
        {
            m += 1;
        }
    }
    cout << "Tomorrow Date is " << d << "/" << m << "/" << y << endl;

    return 0;
}
