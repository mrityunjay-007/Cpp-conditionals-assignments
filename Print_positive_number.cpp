#include<iostream>
using namespace std;
int main()
{
    int num;

    cout<<"Enter the integer: "<<endl;
    cin>>num;

    if(num>0){
        cout<<"The Positive number is: "<<num<<endl;
    }
    else{
        cout<<"The number is negative and it is skipped.."<<endl;
    }

    return 0;
}