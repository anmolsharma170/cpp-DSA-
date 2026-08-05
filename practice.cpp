// #include<bits/stdc++.h>
// using namespace std;
// vector<list<int>> graph;
// int v;
// void add_edge(int src,int des,bool bidir=true){
//     graph[src].push_back(des);
//     if(bidir) graph[des].push_back(src);
// }

// void display(){
//     for(int i=0;i<graph.size();i++){
//         cout<<i<<" -> ";
//         for(auto ele: graph[i]){
//             cout<<ele<<",";
//         }
//         cout<<endl;
//     }
// }

// int main(){
//     cin>>v;
//     graph.resize(v,list<int> ());
//     int e;
//     cin>>e;
//     while(e--){
//         int src,des;
//         cin>>src>>des;
//         add_edge(src,des,1);
//     }
//     display();
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
vector<list<int>> graph;
unordered_set<int> visited;
int v;
void add_edge(int src,int des,bool bidir=true){
    graph[src].push_back(des);
    if(bidir) graph[des].push_back(src);
}

bool dfs(int src,int des){
    if(src==des) return true;
    visited.insert(src);
    for(auto neigh:graph[src]){
        if(!visited.count(neigh)){
            bool res = dfs(neigh,des);
            if(res) return true;
        }
    }
    return false;
}
bool anypath(int src,int des){
    return dfs(src,des);
}
int main(){
    cin>>v;
    graph.resize(v,list<int> ());
    int e;
    cin>>e;
    while(e--){
        int src,des;
        cin>>src>>des;
        add_edge(src,des);
    }
    cout<<anypath(4,2);
    return 0;
}
