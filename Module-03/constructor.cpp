#include<bits/stdc++.h>
using namespace std;

class Employee
{
    public:
        string name;
        int sallary;
        int experiance;
      

        Employee(int s, int e, const string& n)
        {
            sallary=s;
            experiance=e;
           
        }
};


int main()
{
    Employee John(29000,2,"John Abraham");

    cout<<John.name<<endl;
    cout<<John.experiance<<endl;
    cout<<John.sallary<<endl;
    
      
    return 0;
}