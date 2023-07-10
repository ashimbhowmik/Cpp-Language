#include<bits/stdc++.h>
using namespace std;

class Student
{
    public:
        char name[100];
        int roll;
        int cls;
        char section;

        Student(int r, char s, int c, const char* n)
        {
            roll=r;
            section=s;
            cls=c;
            strcpy(name,n);
        }
};

Student fun()
{
    char name[100] = "Rahim Ullah";
    Student rahim(29,'G',7,name);

    return rahim;
}


int main()
{

    Student rahim = fun();

    
    cout<<rahim.roll<<endl;
    cout<<rahim.section<<endl;
    cout<<rahim.cls<<endl;
    cout<<rahim.name<<endl;
    
      
    return 0;
}