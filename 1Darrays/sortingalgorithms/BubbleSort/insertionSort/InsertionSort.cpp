// time complexity = O(n^2)


#include<iostream>
using namespace std;

int print(int *ptr,int n){
    for (int i=0;i<n;i++){
        cout<<ptr[i]<<" ";
    }
}

void insertionsort(int *ptr,int n){
    for(int i=1;i<n;i++){
        int curr=ptr[i];
        int pre=i-1;
        while(pre>=0 && ptr[pre]>curr){
            swap(ptr[pre],ptr[pre+1]);
            pre--;
        }
        ptr[pre+1]=curr;
    }
    print(ptr,n);
}

int main(){
    int arr[5]={5,4,1,3,2};
    int n=sizeof(arr)/sizeof(int);
    insertionsort(arr,n);
    return 0;
}