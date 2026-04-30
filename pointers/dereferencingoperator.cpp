#include<iostream>
using namespace std;
int main(){
    int a=10;
    cout<<&a<<"\n";     //this will print address of variable a 
    cout<<*(&a)<<"\n";  //this will print value stored in that address
    int *ptr=&a;
    cout<<*ptr<<"\n";   //this will also give value stored in that address

    *ptr=20;   // this will chage the vaue of a or the value present at that address
    cout<<a<<"\n";
    return 0;
}
