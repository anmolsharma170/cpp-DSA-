#include<iostream>
#include<vector>
using namespace std;
int factorial(int n){
    if(n==0 || n==1) return 1; 
    int fact=1;
    for(int i=2;i<=n;i++){
        fact*=i;
    }
    return fact;
}
int combination(int n,int r){
    int ncr = factorial(n)/(factorial(r)*factorial(n-r));
    return ncr;
}
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int r;
    cout<<"Enter r: ";
    cin>>r;
    int result = combination(n,r);
    cout<<result;
    return 0;
}