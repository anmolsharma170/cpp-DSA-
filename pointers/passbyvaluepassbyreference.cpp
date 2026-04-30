//passbyvalue

// #include<iostream>
// using namespace std;
// int changeA(int num){
//     num=20;
//     cout<<num<<"\n";
// }
// int main(){
//     int a=10;
//     changeA(a);
//     cout<<a<<"\n";
//     return 0;
// }






//pass by reference

//by concept of pointer
// #include<iostream>
// using namespace std;
// int changeA(int *num){
//     *num=20;
//     cout<<*num<<"\n";

// }
// int main(){
//     int a=10;
//     // int *ptr=&a;
//     changeA(&a);
//     cout<<a<<"\n";
//     return 0;
// }


//passby reference
//by the concept of reference
#include<iostream>
using namespace std;
int main(){
    int a=10;
    int &b=a;
    b=25;
    cout<<b<<"\n";
    cout<<a<<"\n";
    return 0;
}













