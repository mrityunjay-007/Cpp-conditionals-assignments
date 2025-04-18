#include<iostream>
using namespace std;
int main()
{
    int marks;
    cout<<"Enter your marks: "<<endl;
    cin>>marks;

    if(marks > 100){
        cout<<"Enter your valid marks."<<endl;
    }
    else if(marks > 90){
        cout<<"Your Grade is A+"<<endl;
    }
    else if(marks > 80){
        cout<<"Your grade is A"<<endl;
    }
    else if(marks > 70){
        cout<<"Your Grade is B+"<<endl;
    }
    else if(marks > 60){
        cout<<"Your grade is B"<<endl;
    }
    else if(marks >50){
        cout<<"Your grade is C"<<endl;
    }
    else if(marks>40){
        cout<<"Your grade is D"<<endl;
    }
    else if(marks>30){
        cout<<"Your grade is E"<<endl;
    }
    else{
        cout<<"You are Fail.";
    }
    return 0;
}