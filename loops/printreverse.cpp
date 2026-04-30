//is tareke se eak eak kr ke hum lst number le kr print kr rhe hai


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number: ";
//     cin>>n;
//     while(n!=0){
//         int last=n%10;
//         cout<<last<<" ";
//         n=n/10;
//     }
//     return 0;
// }


//is tareke se hum pureh number ko reverse kr ke print krege
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    int rev=0;
    while(n!=0){
        int last=n%10;
        rev=rev*10+last;
        n=n/10;
    }
    cout<<"Reverse of number is: "<<rev;
    return 0;
}