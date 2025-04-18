#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter an integer: "<<endl;
    cin>>num;

    if(num<0){
        num = -num;
    }
    cout<<"Absolute value of number is: "<<num<<endl;

    return 0;
}