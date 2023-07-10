#include<bits/stdc++.h>
using namespace std;

int main()
{


    //space soho input gullar ekek ta word dekhar paoyar jonno
    // Ashim Bhowmik Amit 
      
    string s;
    getline(cin,s);

    stringstream ss(s);

    // ss<<s mane s variable theke string ta ss grp a jacche
    // ss<<s;


    string word;

    int cnt = 0 ;

    // ss >> word mane ss grp theke ekta ekta word ber hoye word a jacche


    while(ss >> word)
      {
        cout<<word<<endl;
        cnt++;
      }

    cout<<cnt<<endl;    
    return 0;
}