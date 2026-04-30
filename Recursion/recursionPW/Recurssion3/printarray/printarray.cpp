#include<iostream>
using namespace std;
void display(int arr[],int n,int i){
    if(i==n) return;
    cout<<arr[i]<<" ";
    display(arr,n,i+1);
}
int main(){
    int arr[] = {1,2,3,4,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    display(arr,n,0);
    return 0;
}