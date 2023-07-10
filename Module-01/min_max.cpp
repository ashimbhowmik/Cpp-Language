#include<iostream>
#include<iomanip>
#include<algorithm>
using namespace std;

// int min(int a, int b)
// {
//     if(a<b) return a;
//     else return b;
// }

// int max(int a, int b)
// {
//     if(a>b) return a;
//     else return b;
// }

int main()
{

    int a,b;
    cin>>a>>b;

    // c++ a 2 ta value er min max ber korar jonno min() max() built in function ache
    
    int result = min(a,b);
    int result1 = max(a,b);
    cout<<"min : "<<result<<endl;
    cout<<"max : "<<result1<<endl;

    return 0;

}