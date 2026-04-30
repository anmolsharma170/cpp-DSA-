#include<iostream>
using namespace std;

void clear(int num,int i){
    int bitmask= (~0) << i;
    num= bitmask & num;
    cout<<num<<endl;
}
int main(){
    clear(15,2);
    return 0;
}