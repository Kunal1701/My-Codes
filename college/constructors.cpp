#include <iostream>

using namespace std;

class Constructors
{
    int x;
    int y;

public:
    Constructors()
    {
        x = 66;
        y = 88;
    }

    Constructors(int n)
    {
        x = y = n;
    }
    Constructors(Constructors &obj)
    {
        x = obj.y;
        y = obj.x;

        cout << "Copy of c1 with inverted values of x and y" << endl;
    }

    Constructors(int a, int b)
    {
        x = a;
        y = b;
    }

    void display()
    {
        cout << "X =" << x << endl;
        cout << "Y =" << y << endl;
        cout << x + y << endl;
    }
};

int main()
{
    int x, y;
    cout << "Enter x " << endl;
    cin >> x;
    cout << "Enter y" << endl;
    cin >> y;
    Constructors c1(x, y);
    c1.display();

    Constructors c2(c1);
    c2.display();

    return 0;
}
