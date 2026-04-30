#include<iostream>
#include<vector>
using namespace std;

void sort01(vector<int> v){
    int n=v.size();
    int noz=0;
    int noo=0;
    for(int i=0;i<n;i++){
        if(v[i]==0){
            noz++;
        }
        else noo++;
    }
    for(int i=0;i<n;i++){
        if(i<noz){
            cout<<0<<" ";
        }
        else cout<<1<<" ";
    }
}
int main(){
    vector<int> v={1,0,1,1,0,0,0,1,1};
    sort01(v);
    return 0;
}