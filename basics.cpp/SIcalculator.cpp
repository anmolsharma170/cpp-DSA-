#include<iostream>
using namespace std;
int main(){
    float princ;
    float rate;
    float time;
    cout<<"Enter the principle: ";
    cin>>princ;
    cout<<"Enter the rate: ";
    cin>>rate;
    cout<<"Enter the time: ";
    cin>>time;
    float simpleintrest=(princ*rate*time)/100;
    cout<<"Simple intrest is: "<<simpleintrest<<endl;
    return 0;
}