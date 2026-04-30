// #include<iostream>
// using namespace std;

// int print(int *ptr,int n){
//     for (int i=0;i<n;i++){
//         cout<<ptr[i]<<" ";
//     }
// }

// void insertionsort(int *ptr,int n){
//     for(int i=1;i<n;i++){
//         int curr=ptr[i];
//         int pre=i-1;
//         while(pre>=0 && ptr[pre]>curr){
//             swap(ptr[pre],ptr[pre+1]);
//             pre--;
//         }
//         ptr[pre+1]=curr;
//     }
//     print(ptr,n);
// }

// int main(){
//     int arr[5]={5,4,1,3,2};
//     int n=sizeof(arr)/sizeof(int);
//     insertionsort(arr,n);
//     return 0;
// }





// #include<iostream>
// using namespace std;
// int main(){
//     int arr[5]={5,4,1,3,2};
//     int n=sizeof(arr)/sizeof(int);
//     for(int i=1;i<n;i++){
//         int curr=arr[i];
//         int pre=i-1;
//         while(pre>=0 && arr[pre]>curr){
//             swap(arr[pre],arr[pre+1]);
//             pre--;
//         }
//         arr[pre+1]=curr;
//     }
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }

#include<iostream>
using namespace std;
int main(){
    int arr[5] = {5,4,1,3,2};
    for(int i=1;i<5;i++){
        int curr = arr[i];
        int prev = i-1;
        while(prev>=0 && arr[prev]>curr){
            swap(arr[prev],arr[prev+1]);
            prev--;
        }
        arr[prev+1]=curr;
    }
    return 0;
}










































