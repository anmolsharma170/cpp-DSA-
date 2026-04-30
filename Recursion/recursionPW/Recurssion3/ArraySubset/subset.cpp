#include<iostream>
#include<vector>
using namespace std;
void subset(vector<int> nums,vector<vector<int>>& finalans,vector<int> ans,int idx){
    if(idx==nums.size()){
        finalans.push_back(ans);
        return;
    }
    subset(nums,finalans,ans,idx+1);
    ans.push_back(nums[idx]);
    subset(nums,finalans,ans,idx+1);
}
int main(){
    vector<vector<int>> finalans;
    vector<int> ans;
    vector<int> nums = {1,2,3};
    subset(nums,finalans,ans,0);
    for(int i = 0;i<finalans.size();i++){
        for(int j = 0;j<finalans[i].size();j++){
            cout<<finalans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}