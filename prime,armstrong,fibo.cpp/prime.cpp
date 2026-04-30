//that has factor 1,number itself only

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number: ";
//     cin>>n;
//     bool isprime=true;
//     for(int i=2;i<n-1;i++){
//         if(n%i==0){
//             isprime=false;
//             break;
//         }
//     }
//     if(isprime){
//         cout<<"Number is a prime number";
//     }
//     else{
//         cout<<"Number is not a prime number";
//     }
//     return 0;
// }

//upar wala code is timeconsuming code isliye we use sqrt method



// #include<iostream>
// #include<cmath>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number: ";
//     cin>>n;
//     bool isprime=true;
//     for(int i=2;i<=sqrt(n);i++){
//         if(n%i==0){
//             isprime=false;
//             break;
//         }
//     }
//     if(isprime){
//         cout<<"Number is a prime number";
//     }
//     else{
//         cout<<"Number is not a prime number";
//     }
//     return 0;
// }


// all prime no from 2 to n
// #include<iostream>
// #include<cmath>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter number till what you want prime numbers: ";
//     cin>>n;
//     // bool isprime=true;
//     for(int i=2;i<=n;i++){
//         bool isprime=true;
//         for(int j=2;j<=sqrt(i);j++){
//             if(i%j==0){
//                 isprime=false;
//                 break;
//             }
//         }
//         if(isprime){
//         cout<<i<<endl;
//     }
//     }
//     return 0;
// }

//with functions
// #include<iostream>
// using namespace std;
// bool isprime(int a){
//     int isprime=true;
//     for(int i=2;i<a;i++){
//         if(a%i==0){
//             isprime=false;
//         }
//     }
//     if(isprime){
//         cout<<"no is a prime number\n";
//     }
//     else{
//         cout<<"no. is not a prime number\n";
//     }
//     return isprime; //koi eak cheez bhi kr sakte thai ya cout ya return 
// }
// int main(){
//     int n;
//     cout<<"Enter number: ";
//     cin>>n;
//     int x=isprime(n);
//     cout<<x;
//     return 0;
// }

#include<iostream>
#include<cmath>
using namespace std;
bool isprime(int a){
    bool isprime=true;
    for(int i=2;i<=sqrt(a);i++){
        if(a%i==0){
            isprime=false;
        }
    }
    if(!isprime){
        cout<<"no. is not prime";
    }
    else{
        cout<<"no. is prime";
    }
}
int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    isprime(n);
    return 0;
}




















