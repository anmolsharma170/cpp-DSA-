#include<iostream>
#include<vector>
using namespace std;
int main(){
    int v,e;
    cin>>v>>e;
    vector<int> parent(v+1);
    vector<int> rank(v+1);
    for(int i=0;i<=v;i++){
        parent[i]=i;
    }
    while(m--){
        int x,y;
        cin>>x>>y;
        bool b = union(parent,rank,x,y);
    }
    return 0;
}