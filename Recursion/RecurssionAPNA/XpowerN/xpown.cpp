// Time complexity O(logn)
#include<iostream>
using namespace std;

int pow(int x,int n){
    if(n==0){
        return 1;
    }
    int halfpow=pow(x,n/2);
    int halfpowsq= halfpow*halfpow;
    if(n%2!=0){
        return x*halfpowsq;
    }
    return halfpowsq;
}
int main(){
    cout<<pow(2,5);
    return 0;
}


































// Time Complexity O(n)


// #include<iostream>
// using namespace std;

// int pow(int x,int n){
//     if(n==0){
//         return 1;
//     }
//     return x*pow(x,n-1);
// }
// int main(){
//     cout<<pow(2,3);
//     return 0;
// }