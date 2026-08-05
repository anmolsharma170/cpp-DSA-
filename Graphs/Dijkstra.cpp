#include<bits/stdc++.h>
#define pp pair<int,int>
using namespace std;
vector<list<pp>> graph;

void add_edge(int src,int des,int wt,bool bidir=true){
    graph[src].push_back({des,wt});
    if(bidir) graph[des].push_back({src,wt});
}

unordered_map<int,int> dijkstra(int src,int n){
    priority_queue<pp,vector<pp>,greater<pp>> pq;
    unordered_set<int> vis;
    vector<int> via(n+1);
    unordered_map<int,int> mp;
    for(int i=0;i<n;i++){
        mp[i]=INT_MAX;
    }
    pq.push({0,src});
    mp[src]=0;
    while(!pq.empty()){
        pp curr = pq.top();
        if(vis.count(curr.second)){
            pq.pop();
            continue;
        }
        vis.insert(curr.second);
        pq.pop();
        for(auto neighbor: graph[curr.second]){
            if(!vis.count(neighbor.first) and mp[neighbor.first]>mp[curr.second]+neighbor.second){
                pq.push({mp[curr.second]+neighbor.second,neighbor.first});
                via[neighbor.first]=curr.second;
                mp[neighbor.first]=mp[curr.second]+neighbor.second;
            }
        }
    }
    return mp;
}
int main(){
    int v,e;
    cin>>v>>e;
    graph.resize(v,list<pp> ());
    while(e--){
        int src,des,wt;
        cin>>src>>des>>wt;
        add_edge(src,des,wt);
    }
    int src;
    cin>>src;
    unordered_map<int,int> shortest_path = dijkstra(src,v);
    for(auto p: shortest_path){
        cout<<p.first<<" "<<p.second<<"\n";
    }
    int dest;
    cin>>dest;
    cout<<shortest_path[dest]<<"\n";
}