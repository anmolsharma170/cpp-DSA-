// #include<iostream>
// using namespace std;
// int factorial(int n){
//     int fact = 1;
//     for(int i = 2;i<=n ;i++){
//         fact = fact*i;
//     }
//     return fact;
// }
// int combination(int n,int r){
//     int ncr = factorial(n)/(factorial(r)*factorial(n-r));
//     return ncr;
// }
// int main(){
//     int n;
//     cin>>n;
//     for(int i=0;i<n;i++){
//         for(int j = 0;j<=i;j++){
//             cout<<combination(i,j)<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }


//118 leetcode
#include<iostream>
#include<vector>
using namespace std;
int main(){
    
    vector<vector<int>> v;
    int n;
    cin>>n; 
    for(int i = 0 ;i<n ;i++){
        vector<int> a;
        v.push_back(a);
    }
    for(int i = 0 ;i<n;i++){
        for(int j = 0 ;j<=i;j++){
            if(j==0 || j==i) v[i][j]=1;
            else{
                v[i][j] = v[i-1][j]+v[i-1][j-1];
            }
        }
    }
    for(int i = 0 ;i<n;i++){
        for(int j = 0;j<=i;j++){
            cout<<v[i][j]<<" ";
        }
    }
    return 0;
}