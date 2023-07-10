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

Person com()

int main() {

    string name = "John Abraham";
    Person* John = new Person(name, 5.8, 30);

    
    string name = "Karim Abraham";
    Person* Karim = new Person(name, 5.8, 40);

    com(Person * John,Person *Karim);


      

    delete person;

    return 0;
}
