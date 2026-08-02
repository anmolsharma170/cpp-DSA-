#include<bits/stdc++.h>
#define ll long long int
#define pp pair<int,int>
using namespace std;
vector<list<pp>> graph;
void add_edge(int src,int des,int wt,bool bidir=true){
    graph[src].push_back({des,wt});
    if(bidir) graph[des].push_back({src,wt});
}
ll prims(int src,int n){
    priority_queue<pp,vector<pp>,greater<pp>> pq;
    unordered_set<int> vis;
    vector<int> par(n+1);
    unordered_map<int,int> mp;
    for(int i=1;i<=n;i++){
        mp[i]=INT_MAX;
    }
    pq.push({0,src});   //dis,node
    mp[src]=0;
    int total_count = 0;
    int result = 0;
    while(total_count<n && !pq.empty()){
        pp curr = pq.top();
        if(vis.count(curr.second)){
            pq.pop();
            continue;
        }
        vis.insert(curr.second);
        total_count++;
        result+=curr.first;
        pq.pop();
        for(auto neighbor: graph[curr.second]){
            if(!vis.count(neighbor.first) && mp[neighbor.first]>neighbor.second){
                pq.push({neighbor.second,neighbor.first});
                par[neighbor.first]=curr.second;
                mp[neighbor.first]=neighbor.second;
            }
        }
    }
    return result;
}
int main(){
    int n,m; //n is no of vertices and m is edges
    cin>>n>>m;
    graph.resize(n+1,list<pp> ());
    while(m--){
        int src,des,wt;
        cin>>src>>des>>wt;
        add_edge(src,des,wt);
    }
    int src;
    cin>>src;
    cout<<prims(src,n);
    return 0;
}