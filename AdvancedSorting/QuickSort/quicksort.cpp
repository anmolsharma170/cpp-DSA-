#include<iostream>
using namespace std;
int partition(int arr[],int si,int ei){
    int pivotele = arr[si];
    int count = 0;
    for(int i = si+1;i<=ei;i++){
        if(arr[i]<=pivotele) count++;
    }
    int pivotindex = si+count;
    swap(arr[si],arr[pivotindex]);
    int i = si;
    int j = ei;
    while(i<pivotindex && j>pivotindex){
        if(arr[i]<=pivotele ) i++;
        if(arr[j]>pivotele) j--;
        if(arr[i]>pivotele && arr[j]<=pivotele){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
    return pivotindex;
}
void quicksort(int arr[],int si,int ei){
    if(si>=ei) return;
    int pi = partition(arr,si,ei);
    quicksort(arr,si,pi-1);
    quicksort(arr,pi+1,ei);
}
int main(){
    int arr[] = {5,1,8,2,7,6,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    quicksort(arr,0,n-1);
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}