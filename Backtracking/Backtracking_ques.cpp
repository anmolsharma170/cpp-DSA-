
// Rat

// #include<iostream>
// #include<vector>
// #include<string>
// using namespace std;

// void solvemazeutil(int maze[][4],int row,int col,string sol,int n,vector<vector<bool>> vis){
//     if(row==n-1 && col==n-1 && maze[row][col]==1){
//         cout<<sol<<"\n";
//         return;
//     }

//     // up
//     if(row-1>=0 && !vis[row-1][col] && maze[row-1][col]==1){
//         vis[row][col]=true;
//         solvemazeutil(maze,row-1,col,sol+"U",n,vis);
//         vis[row][col]=false;
//     }

//     // down
//     if(row+1<n && !vis[row+1][col] && maze[row+1][col]==1){
//         vis[row][col]==true;
//         solvemazeutil(maze,row+1,col,sol+"D",n,vis);
//         vis[row][col]=false;
//     }

//     // left
//     if(col-1>=0 && !vis[row][col-1] && maze[row][col-1]==1){
//         vis[row][col]=true;
//         solvemazeutil(maze,row,col-1,sol+"L",n,vis);
//         vis[row][col]=false;
//     }

//     // right
//     if(col+1<n && !vis[row][col+1] && maze[row][col+1]){
//         vis[row][col]=true;
//         solvemazeutil(maze,row,col+1,sol+"R",n,vis);
//         vis[row][col]=false;
//     }

//     }

// void solvemaze(int maze[4][4],int n){
//     string sol="";
//     vector<vector<bool>> vis(n,vector<bool>(n,false));
//     if (maze[0][0]==1){
//         solvemazeutil(maze,0,0,sol,n,vis);
//     }
// }
// int main(){
//     int n=4;
    
//     int maze[4][4]={{1,0,0,0},
//                     {1,1,0,1},
//                     {1,1,0,0},
//                     {0,1,1,1}
//     };
//     solvemaze(maze,n);

//     return 0;
// }




// keypad mapping
#include<iostream>
#include<vector>
#include<string>
using namespace std;

void bfs(int position,int len,string ans,string digit,vector<vector<char>> l){
    if(position==len){
        cout<<ans<<endl;
    } else{
        vector<char> letters= l[digit[position]-'0'];
        for(int i=0;i<letters.size();i++){
            bfs(position+1,len,ans+letters[i],digit,l);
        }
    }
}

void keycombination(string digit,vector<vector<char>> l){
    int len=digit.size();
    if(len==0){
        cout<<"";
        return;
    }
    string ans="";
    bfs(0,len,ans,digit,l);
}
int main(){
    vector<vector<char>> l={{},{},{'a','b','c'},{'d','e','f'},{'g','h','i'},{'j','k','l'},{'m','n','0'},{'p','q','r','s'},{'t','u','v'},{'w','x','y','z'}};
    string digit="23";
    keycombination(digit,l);
    return 0;
}





















