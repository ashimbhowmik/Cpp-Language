#include<iostream>
#include<iomanip>
using namespace std;

int main()
{

    int x;
    cin>>x;
    // int n = x%2;

    // ekhane case 1 dara x er man == bojacche

    // switch (n)
    switch (x%2)
    {
        case 0:
        cout<<"even"<<endl;
        break;

        case 1:
        cout<<"odd"<<endl;
        break;
    
        // default:
        // cout<<"odd"<<endl;
    }



    return 0 ;
}