// sort this array of characters using insertion sort in descending order
//  char ch[]={'f','b','a','e','c','d'}
// time compexity O(n^2)

#include<iostream>
using namespace std;

void print(char arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" , ";
    }
}

void sortchar(char arr[],int n){
    for(int i=1;i<n;i++){
        int curr=arr[i];
        int pre=i-1;
        while(pre>=0 && arr[pre]<curr){
            swap(arr[pre],arr[pre+1]);
            pre--;
        }
        arr[pre+1]=curr;
    }
    print(arr,n);
}
int main(){
    char arr[6]={'f','b','a','e','c','d'};
    int n=sizeof(arr)/sizeof(char);
    sortchar(arr,n);
    return 0;
}