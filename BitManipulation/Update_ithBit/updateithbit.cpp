// wap to update the ith bit in a number according to given value (0 or 1)
// num=7,i=2,val=0
// num=7,i=3,val=1

#include<iostream>
using namespace std;

void updateeith(int n,int i,int val){
    n=n & ~(1<<i);   //clear the ith bit
    n=n | (val<<i);  //set the ith bit
    cout<<n<<endl;
}
int main(){
    updateeith(7,2,0);
    updateeith(7,3,1);
    return 0;
}