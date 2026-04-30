#include<iostream>
using namespace std;

int expo(int x,int n){
    int ans=1;
    while(n>0){
        int last= n&1;
        if(last){
            ans*=x;
        }
        x=x*x;
        n=n>>1;
    }
    cout<<ans<<endl;
    return ans;
}
int main(){
    expo(2,3);
    return 0;
}