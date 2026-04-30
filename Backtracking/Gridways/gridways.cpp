// #include<iostream>
// #include<vector>
// #include<string>
// using namespace std;

// int gridways(int n,int m,int row,int col){

//     if(row==n-1 && col==m-1){
//         return 1;
//     }
//     if(row>n || col>=m){
//         return 0;
//     }
//     int val1=gridways(n,m,row+1,col);
//     int val2=gridways(n,m,row,col+1);
//     return val1+val2;
// }
// int main(){
//     int n=3;
//     int m=3;
//     cout<<gridways(n,m,0,0);
//     return 0;
// }



// To print all possible routes




#include<iostream>
#include<vector>
#include<string>
using namespace std;

int gridways(int n,int m,int row,int col,string ans){

    if(row==n-1 && col==m-1){
        cout<<ans<<"\n";
        return 1;
    }
    if(row>n || col>=m){
        return 0;
    }
    int val1=gridways(n,m,row+1,col,ans+"D");
    int val2=gridways(n,m,row,col+1,ans+"R");
    return val1+val2;
}
int main(){
    int n=3;
    int m=3;
    string ans="";
    cout<<gridways(n,m,0,0,ans);
    return 0;
}