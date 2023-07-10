#include<bits/stdc++.h>
using namespace std;

class Person {
public:
    string name;
    float height;
    int age;

    // Constructor
    Person(const string& n, float h, int a) {
        name = n;
        height = h;
        age = a;
    }
};

int main() {

    string name = "John Abraham";
    Person* person = new Person(name, 5.8, 30);


    cout<<person->name<<endl;
    cout<<person->height<<endl;
    cout<<person->age<<endl;
      

    delete person;

    return 0;
}
