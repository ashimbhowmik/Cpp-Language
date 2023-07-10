#include<iostream>
#include<iomanip>
#include<utility>
#include<algorithm>
using namespace std;


// swap function er jonno pass by reference korte hoy 

// void my_swap(int *a ,int *b)
// {
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }

int main()
{
    int a,b;
    cin>>a>>b;

    // swap() ekta built in function
    
    swap(a,b);
    cout<<a<<" "<<b<<endl;

    return 0;
}