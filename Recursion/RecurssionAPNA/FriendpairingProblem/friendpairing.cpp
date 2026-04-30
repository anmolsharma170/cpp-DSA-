#include<iostream>
using namespace std;
int friendpairs(int n){
    if(n==1||n==2){
        return n;
    }
    return friendpairs(n-1)+(n-1)*friendpairs(n-2);
}
int main(){
    int n=4;
    cout<<friendpairs(n);
    return 0;
}