// brute force method se hume time complexity O(n^3) mil rahi thi
// hume iseh kum b kr skte hai to O(n^2) by the code given below
// ismai hum eak loop km kr dege

#include<iostream>
using namespace std;
void maxsumarray(int *ptr,int n){
    int maxsum=INT8_MIN;

    for (int start=0;start<n;start++){
        int currsum=0;
        for (int end=start;end<n;end++){
            currsum+=ptr[end];
            maxsum=max(currsum,maxsum);
        }
    }
    cout<<"maximum subarray sum: "<<maxsum;
}
int main(){
    int arr[6]={2,-3,6,-5,4,2};
    int n=sizeof(arr)/sizeof(int);
    maxsumarray(arr,n);
}













