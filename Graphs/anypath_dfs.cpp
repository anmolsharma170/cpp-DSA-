#include<iostream>
#include<list>
#include<vector>
#include<unordered_set>
using namespace std;

vector<list<int>> graph;
int v;
unordered_set<int> visited;
void add_edge(int src,int des,bool bi_dir=true){
    graph[src].push_back(des);
    if(bi_dir){
        graph[des].push_back(src);
    }
}

bool dfs(int curr,int end){
    if(curr==end) return true;
    visited.insert(curr);  //marked visited 
    for(auto neighbour: graph[curr]){
        if(not visited.count(neighbour)){
            bool result=dfs(neighbour,end);
            if(result) return true;
        }
    } 
    return false;
}
bool anypath(int src,int des){
    return dfs(src,des); 
}
int main(){
    cin>>v;
    graph.resize(v,list<int>());
    int e;
    cin>>e;
    while(e--){
        int s,d;
        cin>>s>>d;
        add_edge(s,d,false);
    }
    int x,y;
    cin>>x>>y;
    cout<<anypath(x,y)<<"\n";
    return 0;
}