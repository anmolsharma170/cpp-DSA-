// time compexity - O(n^2)

// #include<iostream>
// using namespace std;
// int print(int *ptr,int n){
//     for(int i=0;i<n;i++){
//         cout<<ptr[i]<<" ";
//     }
// }
// void selectionsort(int *arr,int n){
//     for(int i=0;i<n-1;i++){
//         int minindex=i;
//         for(int j=i+1;j<n;j++){
//             if (arr[j]<arr[minindex]){
//                 minindex=j;
//             }
//         }
//         swap(arr[i],arr[minindex]);
//     }
//     print(arr,n);
// }
// int main(){
//     int arr[5]={5,4,1,3,2};
//     int n=sizeof(arr)/sizeof(int);
//     selectionsort(arr,n);
//     return 0;
// }



// #include<iostream>
// #include<climits>
// using namespace std;
// int main(){
//     int arr[5]={5,1,2,4,3};
//     int n=5;
//     for(int i=0;i<5;i++){
//         int min=INT_MAX;
//         int minidx=-1;
//         for(int j=i;j<n;j++){
//             if(arr[j]<min){
//                 min=arr[j];
//                 minidx=j;
//             }
//         }
//         swap(arr[i],arr[minidx]);
//     }
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }

#include<iostream>
#include<vector>
#include<climits>
using namespace std;
void selectionsort(vector<int> vec){
    int n = vec.size();
    for(int i = 0;i<n;i++){
        int mini = INT_MAX;
        int minidx = -1;
        for(int j = i;j<n;j++){
            if(vec[j]<mini){
                mini = vec[j];
                minidx = j;
            }
        }
        swap(vec[i],vec[minidx]);
    }
    for(int i=  0;i<vec.size();i++){
        cout<<vec[i]<<" ";
    }
}
int main(){
    vector<int> vec = {5,1,2,4,3};
    selectionsort(vec);
    return 0;
}








































