#include<iostream>
using namespace std;

int setithbit(int num,int bitnum){
    int bitmask=(1<<bitnum);
    return (num|bitmask);
}

int main(){
    cout<<setithbit(6,3)<<endl;
    return 0;
}