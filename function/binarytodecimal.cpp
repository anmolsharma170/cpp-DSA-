#include<iostream>
using namespace std;
void bintodeci(int n){
    int k=n;
    int deci=0;
    int pow=1;
    while(k!=0){
        int last=k%10;
        deci+=last*pow;
        pow=pow*2;
        k=k/10;
    }
    cout<<deci<<endl;
}
int main(){
    int m;
    cout<<"Enter number in form of 1 and 0: ";
    cin>>m;
    bintodeci(m);
    return 0;
}