//  '&'-> address of operator
// it stores address of a variable
// address are always hexadecimal (16) and always start with 0x (0,9 a,f)

#include<iostream>
using namespace std;
int main(){
    int x=10;
    int *ptr=&x;
    cout<<ptr<<"="<<&x<<"\n";
}


