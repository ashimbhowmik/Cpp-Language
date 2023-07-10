#include <bits/stdc++.h>
using namespace std;

class Person
{
public:
    string name;
    int age;
    int mark1;
    Person(string nm, int ag, int m)
    {
        name = nm;
        age = ag;
        mark1 = m;
    }
    void hello()
    {
        cout << name << " " << age << endl;
    }
    int mark()
    {
        return mark1;
    }
};

int main()
{

    Person rakib("Rakib Hasan", 23, 100);
    rakib.hello();
    cout << rakib.mark();

    return 0;
}