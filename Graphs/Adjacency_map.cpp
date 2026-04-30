// For weighted graphs we use unordered map for unweighted use sets and directly insert value 

// for weighted use maps 
#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;
vector<unordered_map<int,int>> graph;
int v;
void add_edge(int src,int des,int wt,bool bi_dir=true){
    graph[src][des]=wt;
    if(bi_dir){
        graph[des][src]=wt;
    }
}
void display(){
    for(int i=0;i<graph.size();i++){
        cout<<i<<" -> ";
        for(auto ele: graph[i]){
            cout<<"("<<ele.first<<" , "<<ele.second<<") ,";
        }
        cout<<endl;
    }
}
int main(){
    cin>>v;
    graph.resize(v,unordered_map<int,int>());
    int e;
    cin>>e;
    while(e--){
        int s,d,wt;
        cin>>s>>d>>wt;
        add_edge(s,d,wt);
    }
    display();

    return 0;
}



// for unweighted use sets directly
// #include<iostream>
// #include<vector>
// #include<set>
// using namespace std;
// vector<set<int>> graph; 
// int v;
// void add_edge(int src,int des,bool bidir=true){
//     graph[src].insert(des);
//     if(bidir){
//         graph[des].insert(src);
//     }
// }
// void display(){
//     for(int i=0;i<graph.size();i++){
//         cout<<i<<" -> ";
//         for(int ele: graph[i]){
//             cout<<"("<<ele<<") ,";
//         }
//         cout<<endl;
//     }
// }

// int main(){
//     cin>>v;
//     graph.resize(v,set<int>());
//     int e;
//     cin>>e;
//     while(e--){
//         int s,d;
//         cin>>s>>d;
//         add_edge(s,d);
//     }
//     display();
//     return 0;

// }

















