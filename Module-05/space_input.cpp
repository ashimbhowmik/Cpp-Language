#include<bits/stdc++.h>
using namespace std;

int main()
{
    int  x;
    cin>>x;


    // character input
    // cin.getline(s,100); char s[100];

    // 2ta same kaj kore
    cin.ignore();
    getchar();

    string s;

    // space thakle getline use korbo nahole cin>>s;
    // getline diye korar somoy aytar age jodi int value nei taile string print kore na
    // getline er age enter kaj kore tai input pay ma

    getline(cin,s);

    cout<<x<<endl;
    cout<<s<<endl;

    // cout<<s.size()<<endl;
      
    return 0;
}