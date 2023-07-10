#include<iostream>
using namespace std;
int main()
{
    // for new line
    // cout -> diye printf() er kaj kora bojhay
    // std:: na dile error dibe cause ayta ekta hader file er bundle
    // std::endl -> diye new line kora bojhay


    std::cout<<"Hello\n" ;
    std::cout<<"Helo World\n";
    std::cout<<"Hello "<<"World"<<std::endl;
    std::cout<<"helo"<<std::endl<<"BD"<<std::endl;


    // int a=100,b=200;
    // std::cout<<a<<std::endl;
    // std::cout<<a<<" "<<b;


    int a=100,b=200;
    cout<<a<<std::endl;
    cout<<a<<" "<<b;

    return 0;
}