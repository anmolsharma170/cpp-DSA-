#include<bits/stdc++.h>
using namespace std;
vector<list<int>> graph;
int v;
void add_edge(int src,int des,bool bidir=true){
    graph[src].push_back(des);
    if(bidir) graph[des].push_back(src);
}

bool dfs(int src,int parent,unordered_set<int> &vis){
    vis.insert(src);
    for(auto neigh:graph[src]){
        if(vis.count(neigh) && neigh!=parent){
            return true; //cycle detected
        }
        if(!vis.count(neigh)){
            bool res = dfs(neigh,src,vis);
            if(res) return true;
        }
    }
    return false;
}


bool has_cycle(){
    unordered_set<int> vis;
    for(int i = 0;i<v;i++){
        if(!vis.count(i)){
            bool res = dfs(i,-1,vis);
            if(res) return true; //cycle detected
        }
    }
    return false;
}

int main(){
    cin>>v;
    graph.resize(v,list<int> ());
    int e;
    cin>>e;
    while(e--){
        int src,des;
        cin>>src>>des;
        add_edge(src,des,false);
    }
    bool ans = has_cycle();
    if(ans) cout<<"CYCLE DETECTED";
    else cout<<"CYCLE NOT DETECTED";
    return 0;
}