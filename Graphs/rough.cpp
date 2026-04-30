// shortest path BFS
#include<iostream>
#include<vector>
#include<queue>
#include<list>
#include<unordered_set>
#include<climits>
using namespace std;
vector<list<int>> graph;
int v;
unordered_set<int> visited;

void addpath(int src,int des,bool bidir=true){
    graph[src].push_back(des);
    if(bidir) graph[des].push_back(src);
}

void bfs(int src,int des,vector<int> &dis){
    queue<int> q;
    visited.clear();
    dis.resize(v,INT_MAX);
    dis[src]=0;
    visited.insert(src);
    q.push(src);
    while(not q.empty()){
        int curr=q.front();
        q.pop();
        for(auto neighbor: graph[curr]){
            if(not visited.count(neighbor)){
                q.push(neighbor);
                visited.insert(neighbor);
                dis[neighbor]=dis[curr]+1;
            }
        }
    }
}

int main(){
    graph.resize(v,list<int> ());
    // visited.clear();
    cin>>v;
    int e;
    cin>>e;
    while(e--){
        int src,des;
        cin>>src>>des;
        addpath(src,des);
    }
    int start,end;
    cin>>start>>end;
    vector<int> dis;
    bfs(start,end,dis);
    for(int i=0;i<dis.size();i++){
        cout<<dis[i]<<" ";
    }
    return 0;
}