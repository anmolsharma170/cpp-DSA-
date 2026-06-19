#include<bits/stdc++.h>
using namespace std;

vector<list<int>> graph;
int v;

void topoBFS(){
    // kahns algorithm
    vector<int> indegree(v,0);
    for(int i=0;i<v;i++){
        for(auto neighbor: graph[i]){
            indegree[neighbor]++;
        }
    }
    queue<int> q;
    unordered_set<int> vis;
    for(int i = 0;i<v;i++){
        if(indegree[i]==0){
            q.push(i);
            vis.insert(i);
        }
    }
    while(!q.empty()){
        int node = q.front();
        cout<<node<<" ";
        q.pop();
        for(auto neighbor: graph[node]){
            if(!vis.count(neighbor)){
                indegree[neighbor]--;
                if(indegree[neighbor]==0){
                    q.push(neighbor);
                    vis.insert(neighbor);
                }
            }
        }
    }
}

void add_edge(int src,int des,bool bidir=true){
    graph[src].push_back(des);
    if(bidir)  graph[des].push_back(src);
}
int main(){
    cin>>v;
    graph.resize(v,list<int> ());
    int e;
    cin>>e;
    while(e--){
        int x,y;
        cin>>x>>y;
        add_edge(x,y,false);
    }
    topoBFS();
    return 0;
}