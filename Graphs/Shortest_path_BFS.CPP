#include<iostream>
#include<list>                                                  //output 0 1 2 3 4 5         0 ka 0 se 0 distance
#include<queue>                                                 //       0 1 3 2 1 2 3       0 ka 2 se 3 dis, 0 ka 4 se 1 dis
#include<vector>
#include<unordered_set>
#include<climits>
using namespace std;
vector<list<int>> graph;
// vector<vector<int>> result;
unordered_set<int> visited;
int v;
void add_edge(int src,int des,bool bi_dir=true){
    graph[src].push_back(des);
    if(bi_dir){
        graph[des].push_back(src);
    }
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
        for(auto neighbour: graph[curr]){
            if(not visited.count(neighbour)){
                q.push(neighbour);
                visited.insert(neighbour);
                dis[neighbour]=dis[curr]+1;
            }
        }
    }
}
int main(){
    cin>>v;
    graph.resize(v,list<int>());
    int e;
    cin>>e;
    visited.clear();
    while(e--){
        int s,d;
        cin>>s>>d;
        add_edge(s,d);
    }
    int x,y;
    cin>>x>>y;
    vector<int> dis;
    bfs(x,y,dis);
    for(int i=0;i<dis.size();i++){
        cout<<dis[i]<<" ";
    }
    return 0;
}






