#include<iostream>
using namespace std;

bool check(int arr[],int n,int i){
    if(i==n-1){
        return true;
    }
    if(arr[i]>arr[i+1]){
        return false;
    }
    return check(arr,n,i+1);
}
int main(){
    int arr[5]={1,2,3,4,5};
    int brr[5]={5,3,2,4,6};
    cout<<check(arr,5,0)<<endl;
    cout<<check(brr,5,0)<<endl;

    return 0;
}