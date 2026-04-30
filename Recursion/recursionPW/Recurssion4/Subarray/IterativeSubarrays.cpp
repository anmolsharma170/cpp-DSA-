#include<iostream>
using namespace std;
void printsubarray(int arr[],int n){
    for(int i = 0;i<n;i++){
        for(int k = i;k<n;k++){
            for(int j=i;j<k+1;j++){
                cout<<arr[j];
            }
            cout<<endl;
        }
    }
}
int main(){
    int arr[] = {1,2,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    printsubarray(arr,n);
    return 0;
}