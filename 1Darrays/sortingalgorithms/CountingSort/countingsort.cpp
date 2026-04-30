//timecomplexity = O(n+range)

#include<iostream>
#include<climits>
using namespace std;
int print(int arr[],int n){
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
void countsort(int arr[],int n){
    int frequency[100000]={0};
    int minvalue=INT_MAX,maxvalue=INT_MIN;


    //1st step
    for(int i=0;i<n;i++){
        frequency[arr[i]]++;
        minvalue=min(minvalue,arr[i]);
        maxvalue=max(maxvalue,arr[i]);
    }

    //2nd step
    for(int i=minvalue,j=0;i<=maxvalue;i++){
        while(frequency[i]>0){
            arr[j++]=i;
            frequency[i]--;
        }
    }
    print(arr,n);
}
int main(){
    int arr[8]={1,4,1,3,2,4,3,7};
    countsort(arr,8);
    return 0;
}