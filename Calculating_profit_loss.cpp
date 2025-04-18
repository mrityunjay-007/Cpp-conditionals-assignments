#include<iostream>
using namespace std;
int main()
{
    int sp, cp;

    cout<<"Enter the Cost price of the item: "<<endl;
    cin>>cp;

    cout<<"Enter the Sell price of the item: "<<endl;
    cin>>sp;

    if(sp > cp){
        cout<<"Profit of Rs. "<<(sp-cp)<<endl;
    }
    else{
        cout<<"Loss of Rs. "<<(cp-sp)<<endl;
    }

    return 0;
}