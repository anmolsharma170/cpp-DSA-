#include<iostream>
using namespace std;

bool powerof2(int n){
    if(!(n & (n-1))){
        cout<<"Power of 2."<<endl;
        return true;
    }
    else{
        cout<<"Not power of 2."<<endl;
        return false;
    }
}
int main(){
    powerof2(2);
    powerof2(3);
    powerof2(4);
    powerof2(5);
    return 0;
}