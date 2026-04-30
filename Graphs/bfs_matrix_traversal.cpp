#include<iostream>
#include<queue>
using namespace std;
#define maxver 100
void add_edge(int arr[maxver][maxver],int s,int d){
    arr[s][d]=1;
}
void bfs(int arr[maxver][maxver],int curr,int end){
    bool visited[maxver]={false};
    queue<int> q;
    q.push(curr);
    visited[curr]=true;
    while(!q.empty()){
        int node=q.front();
        q.pop();
        cout<<node<<" ";
        for(int i=0;i<maxver;i++){
            if(arr[node][i]==1 && !visited[i]){
                q.push(i);
                visited[i]=true;
            }
        }
    }

}
int main(){
    int v,e;
    cin>>v>>e;
    int arr[maxver][maxver]={0};
    for(int i=0;i<e;i++){
        int s,d;
        cin>>s>>d;
        add_edge(arr,s,d);
    }
    bfs(arr,0,v);

    return 0;
}