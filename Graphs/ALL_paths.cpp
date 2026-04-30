#include<iostream>
#include<vector>
#include<list>
#include<unordered_set>
using namespace std;
vector<list<int>> graph;
int v;
vector<vector<int>> result;
unordered_set<int> visited;
void addedge(int src,int des,bool bi_dir=true){
    graph[src].push_back(des);
    if(bi_dir){
        graph[des].push_back(src);
    }
}
void dfs(int curr,int end,vector<int> &path){
    if(curr==end){
        path.push_back(curr);
        result.push_back(path);
        path.pop_back();
        return;
    }
    visited.insert(curr);
    path.push_back(curr);
    for(auto neighbour: graph[curr]){
        if(not visited.count(neighbour)){
            dfs(neighbour,end,path);
        }
    }
    path.pop_back();
    visited.erase(curr);
    return ;
}

void allpath(int src,int des){
    vector<int> v;
    dfs(src,des,v);
}
int main(){
    cin>>v;
    graph.resize(v,list<int>());
    int e;
    cin>>e;
    while(e--){
        int s,d;
        cin>>s>>d;
        addedge(s,d);
    }
    int x,y;
    cin>>x>>y;
    allpath(x,y);
    for(auto path: result){
        for(auto ele: path){
            cout<<ele<<" ";
        }
        cout<<endl;
    }
    return 0;
}




















