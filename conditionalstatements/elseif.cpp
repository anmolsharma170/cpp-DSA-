#include<iostream>
using namespace std;
int main(){
    int marks=80;
    if(marks>=90){
        cout<<"A+ grade"<<endl;
    }
    else if(marks>=80 && marks<90){
        cout<<"A Grade"<<endl;
    }
    else{
        cout<<"No Grade"<<endl;
    }
    return 0;
}