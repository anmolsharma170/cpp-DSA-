#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter A: ";
    cin>>a;
    cout<<"Enter B: ";
    cin>>b;
    char op;
    cout<<"Enter the operator: ";
    cin>>op;
    if(op=='+'){
        cout<<"a + b = "<<a+b<<endl;
    }
    else if(op=='-'){
        cout<<"a - b = "<<a-b<<endl;
    }
    else if(op=='*'){
        cout<<"a * b = "<<a*b<<endl;
    }
    else if(op=='/'){
        cout<<"a / b = "<<a/b<<endl;
    }
    else{
        cout<<"Invalid operator."<<endl;
    }
    return 0;
}