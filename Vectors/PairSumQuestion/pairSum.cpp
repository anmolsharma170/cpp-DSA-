#include<iostream>
#include<vector>
using namespace std;

vector<int> pairsum(vector<int> arr,int target){
    int start=0,end=arr.size()-1;
    int currsum=0;
    vector<int> ans;
    while(start<end){
        currsum=arr[start]+arr[end];
        if(currsum==target){
            ans.push_back(start);
            ans.push_back(end);
            return ans;
        }
        else if(currsum>target){
            end--;
        }
        else{
            start++;
        }
    }
    return ans;
}
int main(){
    vector<int> vec={3,2,4};
    int target=6;
    vector<int> ans=pairsum(vec,target);
    cout<<ans[0]<<" , "<<ans[1];
    return 0;
}