#include<iostream>
#include<vector>
#include<climits>
using namespace std;
vector<int> dp(10000006,-2);
vector<int> coins;
int func(int amount){
    if(amount==0) return 0;
    if(dp[amount]!=-2) return dp[amount];
    int result = INT_MAX;

    for(int i = 0;i<coins.size();i++){
        if(amount-coins[i]<0) continue;
        result = min(result,func(amount-coins[i]));
    }
    if(result==INT_MAX) return dp[amount]=INT_MAX;
    return dp[amount] = 1+result;
}
int main(){
    int n,amount;
    cin>>n>>amount;
    while(n--){
        int coin;
        cin>>coin;
        coins.push_back(coin);
    }
    int x = func(amount);
    if(x==INT_MAX) cout<<-1;
    else cout<<x;
    return 0;
}