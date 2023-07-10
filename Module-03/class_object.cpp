#include<bits/stdc++.h>
using namespace std;

class Student
{
    public:
        int roll;
        char name[100];
        int cls;
        char section;
};

int main()
{
      
    //   For Rahim 

    Student Rahim;
    Rahim.roll = 10;
    Rahim.cls = 9 ;
    Rahim.section = 'G';

    char nm[100] = "Rahim";
    strcpy(Rahim.name,nm);


    //   For Karim 
    
    Student Karim;
    Karim.roll = 16;
    Karim.cls = 9 ;
    Karim.section = 'G';

    char nm2[100] = "Karim";
    strcpy(Karim.name,nm2);


    // For Rahim Output
    cout<<"Who are you"<<" "<<Rahim.name<<endl;
    cout<<"Age of Rahim"<<" "<<Rahim.roll<<endl;
    cout<<"Class of Rahim"<<" "<<Rahim.cls<<endl;
    cout<<"Section of Rahim"<<" "<<Rahim.section<<endl;

    cout<<endl;

    // For Karim Output
    cout<<"Who are you"<<" "<<Karim.name<<endl;
    cout<<"Age of Karim"<<" "<<Karim.roll<<endl;
    cout<<"Class of Karim"<<" "<<Karim.cls<<endl;
    cout<<"Section of Karim"<<" "<<Karim.section<<endl;
  
      
    return 0;
}