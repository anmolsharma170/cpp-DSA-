#include<iostream>
using namespace std;

void binarytodecimal(int n){
    int x=n;
    int decimalnum=0;
    int pow=1;
    while(x>0){
        int last=x%10;
        decimalnum=decimalnum+(last*pow);
        pow=pow*2;
        x=x/10;
    }
    cout<<"Binary to decimal conversion of given num "<<n<<" is: "<<decimalnum<<endl;
}
int main(){
    binarytodecimal(110);
    return 0;
}