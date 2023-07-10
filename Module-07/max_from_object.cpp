#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int marks;
    // Student(string name, int roll, int marks)
    // {
    //     this->name = name;
    //     this->roll = roll;
    //     this->marks = marks;
    // }
};

int main()
{

    Student a[3];
    for (int i = 0; i < 3; i++)
    {
        getline(cin, a[i].name);
        cin >> a[i].roll >> a[i].marks;
        cin.ignore();
    }

    // Max

    Student mx;
    mx.marks = INT_MIN;
    for (int i = 0; i < 3; i++)
    {
        if (a[i].marks > mx.marks)
        {
            mx = a[i];
        }
    }
    cout << mx.name << " " << mx.roll << " " << mx.marks << endl;

    // Min

    Student min;
    min.marks = INT_MAX;

    return 0;
}