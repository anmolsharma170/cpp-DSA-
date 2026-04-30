#include<iostream>
using namespace std;
void print(int arr[],int n){
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[] = {5,1,2,4,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    print(arr,n);
    int i = 0;
    while(i<n){
        int correctindex = arr[i]-1;
        if(i==correctindex) i++;
        else swap(arr[i],arr[correctindex]);
    }
    print(arr,n);
    return 0;
}