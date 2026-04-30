#include<iostream>
#include<vector>
using namespace std;

void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int partition(int arr[],int si,int ei){
    int i=si-1;
    int pivot=arr[ei];
    for(int j=si;j<ei;j++){
        if(arr[j]<arr[ei]){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    i++;
    swap(arr[i],arr[ei]);
    return i;
}

void quicksort(int arr[],int si,int ei){
    if(si>=ei){
        return;
    }
    int pivotidx=partition(arr,si,ei);
    partition(arr,si,pivotidx-1);
    partition(arr,pivotidx+1,ei);
}
int main(){
    int arr[6]={5,6,4,1,2,3};
    int n=6;
    quicksort(arr,0,n-1);
    print(arr,n);
    return 0;
}




