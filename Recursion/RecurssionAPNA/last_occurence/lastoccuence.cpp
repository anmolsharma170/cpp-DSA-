#include<iostream>
#include<vector>
using namespace std;
int lastoccur(vector<int> arr,int i,int target){
    if(i==arr.size()){
        return -1;
    }
    int found=lastoccur(arr,i+1,target);
    if(found==-1 && arr[i]==target){
        return i;
    }
    return found;
}
int main(){
    vector<int> arr={1,2,3,3,3,4};
    cout<<lastoccur(arr,0,3);
    return 0;
}