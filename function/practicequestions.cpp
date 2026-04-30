// wap that takes 2 numbers as parameter (a and b) and output a^2+b^2+2*ab
// #include<iostream>
// #include<cmath>
// using namespace std;

// int cal(int a,int b){
//     int res=pow(a,2)+pow(b,2)+2*a*b;
//     cout<<"Result: "<<res;
// }
// int main(){
//     int n,m;
//     cout<<"Enter first number: ";
//     cin>>n;
    
//     cout<<"Enter second number: ";
//     cin>>m;
//     cal(n,m);
//     return 0;
// }



//largest of 3 numbers
// #include<iostream>
// using namespace std;
// void largest(int a,int b,int c){
//     if(a>b && a>b){
//         cout<<a<<" is the largest\n";
//     }
//     else if(b>a && b>c){
//         cout<<b<<" is the largest\n";
//     }
//     else{
//         cout<<c<<" is the largest\n";
//     }
// }
// int main(){
//     int m,n,o;
//     cout<<"Enter first number: ";
//     cin>>m;
//     cout<<"Enter second number: ";
//     cin>>n;
//     cout<<"Enter third number: ";
//     cin>>o;
//     largest(m,n,o);
//     return 0;
// }



// Write a function that accepts a character(ch) as parameters & returns the character that 
// occurs after ch in the English alphabet. Eg:input=‘c’ , return value=‘d’ Note:for ch=‘z’ , return‘a’.
#include<iostream>
using namespace std;
char next(char a){
    if(a=='z'){
        cout<<"a";
    }
    else{
    cout<<char(a+1);
    }
}
int main(){
    char x;
    cout<<"Enter character: ";
    cin>>x;
    next(x);
    return 0;
}






















