#include <iostream>
using namespace std;
int main()
{
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <=5- i; j++)
        {
            cout << "*";
        }
        int space=2*i-2;
        for (int k = 1; k <=space; k++)
        {
            cout<<" ";
        }
        for (int j = 1; j <= 5-i; j++)
        {
            cout << "*";
        }
        

        cout<<endl;
        
    }

    return 0;
}