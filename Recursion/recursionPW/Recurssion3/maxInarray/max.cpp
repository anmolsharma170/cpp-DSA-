// #include<iostream>
// #include<climits>
// using namespace std;
// // void printmax(int arr[0],int n,int i,int max){
// //     if(i==n){
// //         cout<<max<<endl;
// //         return;
// //     } 
// //     if(arr[i]>max) max = arr[i];
// //     printmax(arr,n,i+1,max);
// // }
// int maxinarray(int arr[],int n,int i){
//     if(i==n) return INT_MIN;
//     return max(arr[i],maxinarray(arr,n,i+1));
// }
// int main(){
//     int arr[] = {56,23,5,89,44};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     // printmax(arr,n,0,INT_MIN);
//     cout<<maxinarray(arr,n,0);
//     return 0;
// }


#include<iostream>
#include<climits>
using namespace std;
int maximum(int arr[],int n,int i){
    if(i==n) return INT_MIN;
    return max(arr[i],maximum(arr,n,i+1));
}
int main(){
    int arr[]={1,2,3,4,-5};
    int n = sizeof(arr)/sizeof(int);
    cout<<maximum(arr,n,0);
    return 0;
}



























