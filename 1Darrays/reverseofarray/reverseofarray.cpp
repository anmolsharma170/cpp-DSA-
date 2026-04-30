// space complexity= O(n)
// time complexity= O(n)

//by using extraspace


// #include<iostream>
// using namespace std;

// void printarr(int arr[],int n){
//     cout<<"\nreverse of array is: ";
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<"\n";
// }
// int main(){
//     int arr[5]={5,4,3,9,2};
//     cout<<"your array is: ";
//     int n=sizeof(arr)/sizeof(int);
//     for (int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     int arrcpy[n];
//     for (int i=0;i<n;i++){
//         int j=n-i-1;
//         arrcpy[i]=arr[j];
//     }
//     for(int i=0;i<n;i++){
//         arr[i]=arrcpy[i];
//     }
//     printarr(arr,n);
//     return 0;
// }



// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={5,4,3,9,2};
//     int n=sizeof(arr)/sizeof(int);
//     int brr[n];
//     for (int i=n-1;i>=0;i--){
//         brr[n-1-i]=arr[i];
//     }
//     for(int i=0;i<n;i++){
//         cout<<(brr[i])<<" ";
//     }
//     return 0;
// }








//reversse of array without using extra space
// spacecomplexity = O(1)
// timecomplexity = O(n)

// #include<iostream>
// using namespace std;
// int printarr(int arr[],int n){
//     for (int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }
// int main(){
//     int arr[]={5,4,3,9,2};
//     int n=sizeof(arr)/sizeof(int);
//     int start=0, end=n-1;
//     while(start<end){
//         int temp=arr[start];
//         arr[start]=arr[end];
//         arr[end]=temp;
//         start++;
//         end--;
//     }
//     printarr(arr,n);
//     return 0;
// }

// also swapping can be done through inbuilt swap function


#include<iostream>
using namespace std;
int printarr(int arr[],int n){
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[]={5,4,3,9,2};
    int n=sizeof(arr)/sizeof(int);
    int start=0, end=n-1;
    while(start<end){
        swap(arr[start],arr[end]);  //inbuilt swap function in c++
        start++;
        end--;
    }
    printarr(arr,n);
    return 0;
}













