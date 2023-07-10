#include<iostream>
#include<iomanip>
#include<string.h>
#include<utility>
#include<algorithm>
using namespace std;


int main()
{
    char a[100];

    // lenth 14 for -> ashim bhowmik casue enter ke include korche
    fgets(a,100,stdin);

    // lenth 13 for -> ashim bhowmik
    cin.getline(a,100);

    cout<<strlen(a)<<endl;
    cout<<a<<endl;

    return 0;
}