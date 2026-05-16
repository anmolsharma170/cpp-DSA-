// #include<iostream>
// #include<list>
// #include<vector>
// #include<unordered_set>
// using namespace std;

// vector<list<int>> graph;
// int v;
// unordered_set<int> visited;
// void add_edge(int src,int des,bool bi_dir=true){
//     graph[src].push_back(des);
//     if(bi_dir){
//         graph[des].push_back(src);
//     }
// }

// bool dfs(int curr,int end){
//     if(curr==end) return true;
//     visited.insert(curr);  //marked visited 
//     for(auto neighbour: graph[curr]){
//         if(not visited.count(neighbour)){
//             bool result=dfs(neighbour,end);
//             if(result) return true;
//         }
//     } 
//     return false;
// }
// bool anypath(int src,int des){
//     return dfs(src,des); 
// }
// int main(){
//     cin>>v;
//     graph.resize(v,list<int>());
//     int e;
//     cin>>e;
//     while(e--){
//         int s,d;
//         cin>>s>>d;
//         add_edge(s,d,false);
//     }
//     int x,y;
//     cin>>x>>y;
//     cout<<anypath(x,y)<<"\n";
//     return 0;
// }

#include<iostream>
#include<list>
#include<vector>
#include<unordered_set>
using namespace std;

unordered_set<int> visited;
int v;
vector<list<int>> graph;
void add_edge(int src,int des,bool bidir=true){
    graph[src].push_back(des);
    if(bidir) graph[des].push_back(src);
}
void display(){
    for(int i = 0;i<graph.size();i++){
        cout<<i<<"->";
        for(auto ele: graph[i]){
            cout<<ele<<", ";
        }
        cout<<endl;
    }
}
bool dfs(int curr,int des){
    if(curr==des) return true;
    visited.insert(curr);
    for(auto neighbor:graph[curr]){
        if(!visited.count(neighbor)){
            bool res = dfs(neighbor,des);
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
    graph.resize(v);
    int e;
    cin>>e;
    while(e--){
        int src,des;
        cin>>src>>des;
        add_edge(src,des);
    }
    display();
    cout<<anypath(0,6);
    return 0;
}