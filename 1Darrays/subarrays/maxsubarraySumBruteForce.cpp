// #include<iostream>
// using namespace std;
// void maxsubarraysum(int *arr,int n){
//     int maxsum=INT8_MIN;
//     for (int start=0;start<n;start++){
//         for (int end=start;end<n;end++){
//             int currsum=0;
//             for (int i=start;i<=end;i++){
//                 currsum+=arr[i];
//             }
//             cout<<currsum<<", ";
//             maxsum=max(maxsum,currsum);
//         }
//         cout<<"\n";
//     }
//     cout<<"maximum subarray sum = "<<maxsum;
// }
// int main(){
//     int arr[6]={2,-3,6,-5,4,2};
//     int n=sizeof(arr)/sizeof(int);
//     maxsubarraysum(arr,n);
//     return 0;
// }