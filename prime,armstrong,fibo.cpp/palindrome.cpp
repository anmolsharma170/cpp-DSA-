//1221 reverse 1221 therefore palindrome
//250 reverse 052 therefore not palindrome


#include<iostream>
using namespace std;
int reverse(int n){
    int res=0;
    while(n!=0){
        int last=n%10;
        res=res*10+last;
        n/=10;
    }
    return res;
}
bool ispalindrome(int n){
    if(n!=reverse(n)){
        return false;
    }
    return true;
}
int main(){
    int a;
    cout<<"Enter the number: ";
    cin>>a;
    int ans=ispalindrome(a);
    cout<<ans;
    return 0;
}