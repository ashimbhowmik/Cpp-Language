#include<iostream>
#include<iomanip>
using namespace std;

int main()
{

    char x;
    cin>>x;

    // ekhane case 1 dara x er man == bojacche

    switch (x)
    {
        case 'a':
        cout<<"Vowel"<<endl;
        break;
        
        case 'e':
        cout<<"Vowel"<<endl;
        break;

        case 'i':
        cout<<"Vowel"<<endl;
        break;

        case 'o':
        cout<<"Vowel"<<endl;
        break;

        case 'u':
        cout<<"Vowel"<<endl;
        break;
    
        default:
        cout<<"Constant"<<endl;
    }



    return 0 ;
}