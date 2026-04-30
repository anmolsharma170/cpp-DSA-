#include<iostream>
using namespace std;

int tilingproblem(int n){
    if(n==0||n==1){
        return 1;
    }
    // int ans1=tilingproblem(n-1);
    // int ans2=tilingproblem(n-2);
    // return ans1+ans2;

    // or
    return tilingproblem(n-1)+tilingproblem(n-2);
}
int main(){
    int n=3;
    cout<<tilingproblem(n);
    return 0;
}