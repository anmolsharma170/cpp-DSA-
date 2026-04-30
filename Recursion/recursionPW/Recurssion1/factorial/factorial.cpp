#include<iostream>
using namespace std;
// void factorialupto(int n){
//     for(int i = 1;i<=n;i++){
//         int f = 1;
//         for(int j = 2;j<=i;j++){
//             f*=j;
//         }
//         cout<<f<<endl;
//     }
// }

void factorialupto(int n){
    int f = 1;
    for(int i=1;i<=n;i++){
        f*=i;
        cout<<f<<endl;
    }
}
int fact(int n){
    int f = 1;
    for(int i = 2;i<=n;i++){
        f*=i;
    }
    return f;
}
int main(){
    int n = 5;
    // cout<<fact(n);
    factorialupto(n); 
}

