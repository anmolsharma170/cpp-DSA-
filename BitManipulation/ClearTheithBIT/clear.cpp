#include<iostream>
using namespace std;

int clearith(int num,int i){
    int bitmask= ~(1<<i);
    num= (num&bitmask);
    cout<<num<<endl;
}
int main(){
    int num=6;
    clearith(num,1);
    return 0;
}