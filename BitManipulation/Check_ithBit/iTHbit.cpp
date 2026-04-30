// to check whether the bit is 0 or 1 at the ith position

#include<iostream>
using namespace std;

int getithbit(int n,int bitnum){
    int mask= 1<<bitnum;   //for bitmask
    if(!(mask & n)){
        return 0;
    }
    else{
        return 1;
    }
}
int  main(){
    cout<<getithbit(6,2);
    return 0;
}