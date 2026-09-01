#include<iostream>
#include<vector>
#include<climits>
using namespace std;

vector<int> get_digits(int n){
    vector<int> res;
    while(n>0){
        if(n%10!=0) res.push_back(n%10);
        n/=10;
    }
    return res;
}
vector<int> dp(1000006,0);
int func(int n){
    if(n==0) return 0;
    if(n<=9) return 1;
    vector<int> v = get_digits(n);
    if(dp[n]!=0) return dp[n];
    int result = INT_MAX;
    for(int i=0;i<v.size();i++){
        result = min(result,func(n-v[i]));
    }
    return dp[n]=1+result;
}

int main(){
    int n;
    cin>>n;
    cout<<func(n)<<"\n";
    return 0;
}