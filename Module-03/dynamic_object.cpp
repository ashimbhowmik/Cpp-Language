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



int main()
{

    char name[100]="Rahim Ullaj";
    Student *rahim = new Student(29,'A',10,name);


    // 1st way

    cout<<(*rahim).roll<<endl;
    cout<<(*rahim).section<<endl;

    // 2nd way
    
    cout<<rahim->cls<<endl;
    cout<<rahim->name<<endl;
      
    return 0; 
}