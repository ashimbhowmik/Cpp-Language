#include<bits/stdc++.h>
using namespace std;

int main()
{
      
    string a;
    // string:: iterator i;
    cin>>a;

    // for(int i = 0 ; i<a.size() ; i++)
    // {
    //     cout<<a[i]<<endl;
    // }

    //surur ghor like a[0]; 
    cout<<*a.begin()<<endl;

    // ses er ghor like a[end]
    cout<<*(a.end()-1)<<endl;

    // pointer dhore dhore aganor loop
    // for(i=a.begin(); i<a.end() ; i++)
    // {
    //     cout<<*i<<endl;
    // }
    
    for(auto i=a.begin(); i<a.end() ; i++)
    {
        cout<<*i<<endl;
    }
      
    return 0;
}