// #include<iostream>
// using namespace std;
// int power(int a,int b){
//     if(b==0) return 1;
//     return a*power(a,b-1);
// }
// int main(){
//     cout<<power(1,32);
//     return 0;
// } 


#include<iostream>
using namespace std;
int apowerb(int a,int b){
    if(b==0) return 1;
    if(b==1) return a;
    return a*apowerb(a,b-1);
}
int main(){
    int a,b;
    cout<<"Enter a: ";
    cin>>a;
    cout<<endl;
    cout<<"Enter b: ";
    cin>>b;
    cout<<endl;
    cout<<apowerb(a,b);

    return 0;
}


































