#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string nm;
    int cls;
    char s;
    int id;
};

int main()
{

    int x;
    cin >> x;
    Student a[x];

    for (int i = 0; i < x; i++)
    {
        cin >> a[i].nm;
        cin >> a[i].cls >> a[i].s >> a[i].id;
        cin.ignore();
    }
    for (int i = 0; i < x / 2; i++)
    {
        int temp = a[i].id;
        a[i].id = a[x - 1 - i].id;
        a[x - 1 - i].id = temp;
    }

    for (int i = 0; i < x; i++)
    {
        cout << a[i].nm << " " << a[i].cls << " " << a[i].s << " " << a[i].id << endl;
    }

    return 0;
}