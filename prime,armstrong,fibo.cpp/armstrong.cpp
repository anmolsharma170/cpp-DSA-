
//sum of cube of its digits of a number=number

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int x=n;
    int sum=0;
    while(n!=0){
        int last=n%10;
        sum=sum+last*last*last;
        n=n/10;
    }
    if(x==sum){
        cout<<"Number is an armstrong number"<<endl;
    }
    else{
        cout<<"Number is not an armstrong number"<<endl;
    }
    return 0;
}