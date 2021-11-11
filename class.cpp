#include <iostream>
using namespace std;
class employee
{
private:
    char name[15];
    char author[15];
    int number;
    int price;

public:
    void getdata()
    {
        cout << "enter book name" << endl;
        cin.getline(name, 15);
        cout << "enter book author name" << endl;
        cin.getline(author, 15);
        cout << "enter price" << endl;
        cin >> price;
        cout << "enter book number" << endl;
        cin >> number;
        cin.ignore();
    }
    void show()
    {
        cout << "Name is " << name << endl;
        cout << "price is " << price << endl;
        cout << "author is " << author << endl;
        cout << "book number is " << number << endl;
    }
};

int main()
{
    employee e[5];
    for (int i = 0; i < 5; i++)
    {
        e[i].getdata();
        e[i].show();
    }

    return 0;
}