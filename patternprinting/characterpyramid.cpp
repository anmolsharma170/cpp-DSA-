/*
A
B C
D E F
G H I J
*/

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     char ch='A';
//     cout<<"Enter the number: ";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             cout<<ch<<" ";
//             ch++;
//         }
//         cout<<"\n";
//     }
//     return 0;
// }



#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number: ";
    cin>>n;
    char ch='A';
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
    }
    return 0;
}





























