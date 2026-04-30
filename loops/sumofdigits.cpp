//print sum of digits using while loop n=10829
// #include<iostream>
// using namespace std;
// int main(){
//     int sum=0;
//     int n=10829;
//     cout<<n;
//     while(n!=0){
//         int last=n%10;
//         sum+=last;
//         n=n/10;
//     }
//     cout<<"\nSum of digits is: "<<sum;
//     return 0;
// }


//print sum of odd digits using while loop
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    int sum=0;
    while(n!=0){
        int last=n%10;
        if(last%2!=0){
            sum+=last;
        }
        n=n/10;
    }
    cout<<"\nSum is: "<<sum;
    return 0;
}