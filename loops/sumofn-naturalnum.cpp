//using for loop

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     int sum=0;
//     cout<<"Enter n: ";
//     cin>>n;
//     for(int i=0;i<=n;i++){
//         sum=sum+i;
//     }
//     cout<<"Sum is: "<<sum;
//     return 0;
// }


//using while loop
#include<iostream>
using namespace std;
int main(){
    int sum=0;
    int i=0;
    int n;
    cout<<"Enter n: ";
    cin>>n;
    while(i<=n){
        sum=sum+i;
        i++;
    }
    cout<<"sum is: "<<sum;
    return 0;
}