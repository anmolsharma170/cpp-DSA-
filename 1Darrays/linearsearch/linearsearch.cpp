/*
arr={2,4,6,8,12,14,16}
search for key 10 and return its index*/


//time complexity O(n)

#include<iostream>
using namespace std;
int linearsearch(int *arr,int n,int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}
int main(){
    int arr[]={2,4,6,8,10,12,14,16};
    int n=sizeof(arr)/sizeof(int);
    int key;
    cout<<"Enter the key whose index you want from the given array: ";
    cin>>key;
    cout<<linearsearch(arr,n,key);
    return 0;
}