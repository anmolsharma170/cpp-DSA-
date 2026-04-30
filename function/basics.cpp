#include<iostream>
using namespace std;

void sayhello(){
    cout<<"Hello :)\n";
}

void assistant(){
    sayhello();
    cout<<"Work done\n";
}
int main(){
    assistant();
    return 0;
}



