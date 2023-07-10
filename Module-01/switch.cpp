#include<iostream>
#include<iomanip>
using namespace std;

int main()
{

    int x;
    cin>>x;

    // ekhane case 1 dara x er man == bojacche

    switch (x)
    {
        case 1:
        cout<<"One"<<endl;
        break;
        
        case 2:
        cout<<"Two"<<endl;
        break;

        case 3:
        cout<<"Three"<<endl;
        break;

        case 4:
        cout<<"Four"<<endl;
        break;

        case 5:
        cout<<"Five"<<endl;
        break;
    
        default:
        cout<<"Invalid Input"<<endl;
    }



    return 0 ;
}