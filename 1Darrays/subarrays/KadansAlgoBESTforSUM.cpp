// kadans algorithm is the best approach to find maximum sum of suarrays
#include<iostream>
using namespace std;
int maxsumarray(int *arr,int n){
    int maxsum=INT8_MIN;
    int currsum=0;
    for(int i=0;i<n;i++){
        currsum+=arr[i];
        maxsum=max(currsum,maxsum);
        if (currsum<0){
            currsum=0;
        }
    }
    cout<<"Maximun subarray sum: "<<maxsum;
}
int main(){
    int arr[6]={2,-3,6,-5,4,2};
    int n=sizeof(arr)/sizeof(int);
    maxsumarray(arr,n);
    return 0;
}