#include<iostream>
using namespace std;
int factorial(int n){
    if(n==0 || n==1) return 1;
    return n*factorial(n-1);
}
int combination(int n,int r){
    int ans = factorial(n)/(factorial(r)*(factorial(n-r)));
    return ans;
}
int main(){
    int r = 5;
    for(int i = 0;i<r;i++){
        for(int j = 0;j<=i;j++){
            int ans = combination(i,j);
            cout<<ans<<" ";
        }
        cout<<endl;
    }
    return 0;
}