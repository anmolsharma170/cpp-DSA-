// give number according to their order in ascending order

#include<iostream>
#include<vector>
#include<string>
#include<climits>
using namespace std;
int main(){
    vector<int> vec={55,32,65,98,54,-1,-11};
    vector<int> arr(vec.size(),0);
    int idx = 0;
    for(int i=0;i<vec.size();i++){
        int min = INT_MAX;
        int minidx=-1;
        for(int j=0;j<vec.size();j++){
            if(arr[j]==1){
                continue;
            }
            else{
                if(arr[j]<min){
                    min=arr[j];
                    minidx = j;
                }
            }
            vec[minidx]=idx;
            arr[minidx]=1;
            idx++;

        }
        
    }
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}