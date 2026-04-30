#include<iostream>
using namespace std;
int main(){
    int income;
    cout<<"Enter income (in lakhs): ";
    cin>>income;
    if(income<5){
        cout<<"Payable tax = 0"<<endl;
    }
    else if(income<=10){
        cout<<"payable tax = "<<0.2*income<<" lakhs"<<endl;
    }
    else{
        cout<<"payable tax = "<<0.3*income<<" lakhs"<<endl;
    }
    return 0;
}