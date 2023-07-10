#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string nm;
    int cls;
    char s;
    int math_marks;
    int eng_marks;
};

int main()
{

    int x;
    cin >> x;
    Student a[x];

    for (int i = 0; i < x; i++)
    {
        cin >> a[i].nm;
        cin >> a[i].cls >> a[i].s >> a[i].math_marks >> a[i].eng_marks;
        cin.ignore();
    }

    for (int i = x - 1; i >= 0; i--)
    {
        cout << a[i].nm << " " << a[i].cls << " " << a[i].s << " " << a[i].math_marks << " " << a[i].eng_marks << endl;
    }

    return 0;
}