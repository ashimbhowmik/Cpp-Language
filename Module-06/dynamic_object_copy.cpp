#include <bits/stdc++.h>
using namespace std;

class Person
{
public:
    string name;
    int age;
    Person(string name, int age)
    {
        this->name = name;
        this->age = age;
    }
};

int main()
{

    Person *rakib = new Person("Rakib Hasan", 25);

    Person *sakib = new Person("Sakib all", 28);

    // rakib = sakib;

    // copy object one way
    rakib->age = sakib->age;
    rakib->name = sakib->name;

    // easy way
    *rakib = *sakib;

    delete sakib;
    cout << rakib->name << " " << rakib->age << endl;

    return 0;
}