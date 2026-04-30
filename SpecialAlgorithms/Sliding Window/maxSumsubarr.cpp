
// without sliding window

// #include<iostream>
// #include<climits>
// using namespace std;
// void maxsum(int arr[],int n,int k){
//     int maxsum = INT_MIN;
//     for(int i = 0;i<n-k;i++){
//         int sum = 0;
//         for(int j=i;j<i+k;j++){
//             sum+=arr[j];
//         }
//         if(sum>maxsum) maxsum=sum;
//     }
//     cout<<maxsum;
// }
// int main(){
//     int arr[] = {7,1,2,5,8,4,9,3,6};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     int k = 3;
//     maxsum(arr,n,k);
//     return 0;
// }

// with sliding window

// #include<iostream>
// #include<climits>
// using namespace std;
// int main(){
//     int arr[] = {7,1,2,5,8,4,9,3,6};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     int maxsum = INT_MIN;
//     int idx = 0;
//     int k = 4;
//     int prevsum = 0;
//     for(int i = 0;i<k;i++){
//         prevsum+=arr[i];
//     }
//     maxsum = prevsum;
//     int i = 1;
//     int j = k;
//     while(j<n){
//         int currsum = prevsum+arr[j]-arr[i-1];
//         if(currsum>maxsum){
//             maxsum = currsum;
//             idx = i;
//         } 
//         prevsum=currsum;
//         i++;
//         j++;
//     }
//     cout<<maxsum<<endl;
//     cout<<idx<<endl;
//     return 0;
// }

#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[] = {7,1,2,5,8,4,9,3,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int maxsum = INT_MIN;
    int k = 4;
    int idx = -1;
    int prevsum = 0;
    for(int i = 0;i<k;i++){
        prevsum+=arr[i];
    }
    maxsum = prevsum;
    int i = 1;
    int j = k;
    while(j<n){
        int currsum = prevsum+arr[j]-arr[i-1];
        if(currsum>prevsum){ 
            maxsum = currsum;
            idx = i;
        }
        prevsum = currsum;
        i++;
        j++;
    }
    cout<<maxsum<<endl;
    cout<<idx;
    return 0;
}