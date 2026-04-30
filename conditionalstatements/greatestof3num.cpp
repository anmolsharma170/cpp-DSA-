#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter number A: ";
    cin>>a;
    cout<<"Enter number B: ";
    cin>>b;
    cout<<"Enter number C: ";
    cin>>c;
    if (a>b && a>c){
        cout<<a<<"(a) is the largest"<<endl;
    }
    else if(b>a && b>c){
        cout<<b<<"(b) is the greatest";
    }
    else{
        cout<<c<<"(a) is the greatest";
    }
    return 0;
}