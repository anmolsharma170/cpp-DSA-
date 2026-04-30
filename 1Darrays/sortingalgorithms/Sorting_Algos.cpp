//[3,6,2,1,8,7,4,5,3,1]

// bubble sort

// #include<iostream>
// using namespace std;
// int print(int arr[],int n){
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }
// void bubblesort(int arr[],int n){
//     for(int i=0;i<n;i++){
//         bool isSwap=false;
//         for(int j=0;j<n-i-1;j++){
//             if(arr[j]>arr[j+1]){
//                 swap(arr[j],arr[j+1]);
//                 isSwap=true;
//             }
//         }
//         if(!isSwap){
//             break;
//         }
//     }
//     print(arr,n);
// }

// int main(){
//     int arr[]={3,6,2,1,8,7,4,5,3,1};
//     int n=sizeof(arr)/sizeof(int);
//     bubblesort(arr,n);
//     return 0;
// }



// Selection Sort

// #include<iostream>
// using namespace std;

// int print(int arr[],int n){
//     for(int  i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }

// void selectionSort(int arr[],int n){
//     for(int i=0;i<n-1;i++){
//         int minindex=i;
//         for(int j=i+1;j<n;j++){
//             if(arr[j]<arr[minindex]){
//                 minindex=j;
//             }
//         }
//         swap(arr[minindex],arr[i]);
//     }
//     print(arr,n);
// }

// int main(){
//     int arr[]={3,6,2,1,8,7,4,5,3,1};
//     int n=sizeof(arr)/sizeof(int);
//     selectionSort(arr,n);
//     return 0;
// }

// Insertion Sort

#include<iostream>
using namespace std;
int print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
void insertionsort(int arr[],int n){
    for(int i=1;i<n;i++){
        int curr=arr[i];
        int pre=i-1;
        while(pre>=0 && arr[pre]>curr){
            swap(arr[pre],arr[pre+1]);
            pre--;
        }
        arr[pre+1]=curr;
    }
    print(arr,n);
}
int main(){
    int arr[]={3,6,2,1,8,7,4,5,3,1};
    int n=sizeof(arr)/sizeof(int);
    insertionsort(arr,n);
    return 0;
}



























