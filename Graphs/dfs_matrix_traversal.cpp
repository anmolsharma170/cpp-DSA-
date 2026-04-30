#include<iostream>
using namespace std;
#define maxver 100

void add_edge(int arr[maxver][maxver],int s,int d){
    arr[s][d]=1;
}
void dfs(int arr[maxver][maxver],int visited[maxver],int v,int start_vert){
    cout<<start_vert<<" ";
    for(int i=0;i<v;i++){
        if(arr[start_vert][i]==1 && !visited[i]){
            dfs(arr,visited,v,i);
        }
    }
}
int main(){
    int v,e;
    cin>>v>>e;
    int arr[maxver][maxver]={0};
    int visited[maxver]={0};
    for(int i=0;i<e;i++){
        int s,d;
        cin>>s>>d;
        add_edge(arr,s,d);
    }
    int si;
    cin>>si;
    dfs(arr,visited,v,si);
    return 0;
}