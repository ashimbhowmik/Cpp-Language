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


    string name = "Karim Abraham";
    Person* person = new Person(name, 5.8, 40);


      

    delete person;

    return 0;
}
