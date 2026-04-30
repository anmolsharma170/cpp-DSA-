// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number: ";
//     cin>>n;
//     int i=n;
//     int fact=1;
//     while(n!=1){
//         fact=fact*n;
//         n=n-1;
//     }
//     cout<<fact<<endl;
//     return 0;
// }

#include<iostream>
using namespace std;
int factorial(int a){
    int fact=1;
    for(int i=1;i<=a;i++){
        fact=fact*i;
    }
    cout<<"Factorial of entered number is: "<<fact<<endl;
}
int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    factorial(n);
    return 0;
}