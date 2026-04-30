#include<iostream>
using namespace std;
int gcd(int a,int b){
    if(a==0) return b;
    return gcd(a%b,a);
}
int main(){
    cout<<gcd(60,24);
    return 0;
}