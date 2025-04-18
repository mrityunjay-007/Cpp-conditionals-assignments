#include<iostream>
using namespace std;
int main()
{
     double first, second;
     char op;
     cout<<"Enter the first integer: "<<endl;
     cin>>first;

     cout<<"Enter the second integer: "<<endl;
     cin>>second;

     cout<<"Enter the operator: "<<endl;
     cin>>op;

     switch(op){
        case '+':
        cout<<"Sum of integers= "<<(first+second)<<endl;
        break;
        case '-':
        cout<<"Difference of integers= "<<(first-second)<<endl;
        break;
        case '*':
        cout<<"Product of integers= "<<(first*second)<<endl;
        break;
        case '/':
        if(second==0){
            cout<<"Can not divide with 0!!"<<endl;
        }
        else{
            cout<<"The quotant after dividing is: "<<(first/second)<<endl;
        }
        break;
        default:
        cout<<"The entered operator is not valid.."<<endl;
        break;
     }
     return 0;
}