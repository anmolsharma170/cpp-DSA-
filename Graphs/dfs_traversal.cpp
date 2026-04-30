// only starting node is given  (eg start from 1st node or start from 2nd node)

#include<iostream>
#include<unordered_set>
#include<list>
#include<vector>
using namespace std;
vector<list<int>> graph;
int v;
unordered_set<int> visited;
void add_edge(int src,int des,bool bi_dir=true){
    graph[src].push_back(des);
    if(bi_dir){
        graph[des].push_back(src);
    }
    return;
}

void dfs(int curr){
    cout<<curr<<" ";
    visited.insert(curr);
    for(auto neighbor: graph[curr]){
        if(not visited.count(neighbor)){
            dfs(neighbor);
        }
    }
}
int main(){
    cin>>v;
    graph.resize(v+1,list<int> ());
    int e;
    cin>>e;
    while(e--){
        int s,d;
        cin>>s>>d;
        add_edge(s,d);
    }
    int x;
    cin>>x;
    dfs(x);
    return 0;
}