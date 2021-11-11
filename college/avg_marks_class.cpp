#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    int rollNo;
    int sub1;
    int sub2;
    int sub3;

    void getAvgMarks()
    {
        float avgMarks = (sub1 + sub2 + sub3) / 3;
        cout << " Average Marks= " << avgMarks << endl;
    }

public:
    void getValues()
    {
        cout << "Enter the Roll Number :" << endl;
        cin >> rollNo;

        cout << "Enter Sub1 Marks :" << endl;
        cin >> sub1;
        cout << "Enter Sub2 Marks :" << endl;
        cin >> sub2;
        cout << "Enter Sub3 Marks :" << endl;
        cin >> sub3;
    }

    void showDetails()
    {
        cout << "Roll Number =" << rollNo << endl;
        cout << "Sub 1 Marks " << sub1 << endl;
        cout << "Sub 2 Marks " << sub2 << endl;
        cout << "Sub 3 Marks " << sub3 << endl;
        cout << "-----------------------------------------" << endl;
        getAvgMarks();
        cout << "-----------------------------------------" << endl;
    }
};

int main()
{
    Student std1,std2;

    std1.getValues();
    std1.showDetails();
    std2.getValues();
    std2.showDetails();
    return 0;
}
