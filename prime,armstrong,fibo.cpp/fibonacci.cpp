//next number is sum of previous two 1st two num 0,1
#include<iostream>
using namespace std;
int main(){
    
        int a=0;
        int b=1;
        int sum=0;
        int n;
        cout<<"Enter number: ";
        cin>>n;
        for(int i=0;i<n;i++){
            cout<<a<<" ";
            sum=a+b;
            a=b;
            b=sum;
        
    }
    return 0;
}