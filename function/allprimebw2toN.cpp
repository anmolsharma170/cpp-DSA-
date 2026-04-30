#include<iostream>
#include<cmath>
using namespace std;
bool isprime(int a){
    if(a==1){
        return false;
    }
    for(int i=2;i<=sqrt(a);i++){
        if(a%i==0){
            return false;
        }
    }
    return true;
}
void allprime(int n){
    for(int i=2;i<=n;i++){
        if(isprime(i)){
            cout<<i<<" ";
        }
    }
    cout<<endl;
}
int main(){
    allprime(13);
    return 0;
}