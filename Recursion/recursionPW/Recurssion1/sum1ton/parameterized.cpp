// #include<iostream>
// using namespace std;
// int summ(int x,int n){
//     int total = 0;
//     if(x>n) return 0;
//     total = x + summ(x+1,n);
//     return total;

// }
// int main(){
//     cout<<summ(2,6);
//     return 0;
// }

#include<iostream>
using namespace std;
int summ(int sum,int n){
    if(n==0) return sum;
    summ(sum+n,n-1);

}
int main(){
    cout<<summ(0,4);
    return 0;
}