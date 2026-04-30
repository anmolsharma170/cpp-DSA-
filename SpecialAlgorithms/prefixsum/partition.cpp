#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5,15};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=1;i<n;i++){
        arr[i]=arr[i]+arr[i-1];
    }
    int idx = -1;
    for(int i = 1;i<n;i++){
        if(2*arr[i]==arr[n-1]){
            idx = i;
        }
    }
    if(idx==-1) cout<<"Array cannot be partitioned";
    else cout<<"partition at index: "<<idx;
    return 0;
}