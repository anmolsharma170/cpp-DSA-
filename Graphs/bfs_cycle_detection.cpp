#include<bits/stdc++.h>
using namespace std;
vector<list<int>> graph;
int v;

void add_edge(int src,int des,bool bidir=true){
    graph[src].push_back(des);
    if(bidir) graph[des].push_back(src);
}

bool bfs(int src){
    unordered_set<int> vis;
    queue<int> q;
    vector<int> par(v,-1);
    q.push(src);
    vis.insert(src);
    while(!q.empty()){
        int curr = q.front();
        q.pop();
        for(auto neighbor:graph[src]){
            if(vis.count(neighbor) && par[curr]!=neighbor)return true;
            if(!vis.count(neighbor)){
                vis.insert(neighbor);
                par[neighbor]=curr;
                q.push(neighbor);
            }
        }
    }
}

bool has_cycle(){
    unordered_set<int> vis;
    for(int i=0;i<v;i++){
        if(!vis.count(i)){
            bool res = bfs(i);
            if(res) return true;
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
    cout<<ans;
    return 0;
}