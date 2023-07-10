#include<bits/stdc++.h>
using namespace std;
      
class Person {
    public:
        char sallary;
        int age;
};

int main() {
 
    Person John;

    // Objects
    John.sallary = 25000;
    John.age = 25;

   
    cout << "Sallary: " << John.sallary <<endl;
    cout << "Age: " << John.age << endl;

     
    return 0;
}