#include<iostream>
using namespace std;

void oddeven(int num){
    if((num & 1)==0){
        cout<<"Even"<<endl;
    }
    else{
        cout<<"odd"<<endl;
    }
}
int main(){
    int a=12;
    oddeven(a);
    return 0;
}