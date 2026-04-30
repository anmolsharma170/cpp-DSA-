// time complexity O(n^2)
// niche 2nd no wala code O(n) time-complexity

// #include<iostream>
// using namespace std;

// int sum(int arr[][4],int n){
//     int sum=0;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             if(i==j){
//                 sum+=arr[i][j];
//             }
//             else if(j==n-i-1){
//                 sum+=arr[i][j];
//             }
//         }
//     }
//     cout<<"Sum is: "<<sum;
// }
// int main(){
//     int arr[4][4]= {{1,2,3,4},
//                     {5,6,7,8},
//                     {9,10,11,12},
//                     {13,14,15,16}};
//     sum(arr,4);
//     return 0;
// }



// time complexity O(n)

#include<iostream>
using namespace std;
int add(int arr[][4],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i][i];
        if(i!=n-i-1){
            sum+=arr[i][n-i-1];
        }
    }
    cout<<"Sum is: "<<sum;
}
int main(){
    int arr[4][4]= {{1,2,3,4},
                    {5,6,7,8},
                    {9,10,11,12},
                    {13,14,15,16}};
    add(arr,4);
    return 0;
}




















