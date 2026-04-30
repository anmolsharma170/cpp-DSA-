/*
1
0 1
1 0 1
0 1 0 1
1 0 1 0 1
*/
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter number: ";
//     cin>>n;
//     int k=1;
//     int m=0;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             if((i+j)%2==0){
//                 cout<<k;
//             }
//             else{
//                 cout<<m;
//             }
//         }
//         cout<<"\n";
//     }
//     return 0;
// }


#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int k=1;
    int m=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            if((i+j)%2==0){
                cout<<k;
            }
            else{
                cout<<m;
            }
        }
        cout<<endl;
    }
    return 0;
}















