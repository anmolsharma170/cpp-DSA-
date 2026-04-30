#include<iostream>
#include<vector>
#include<string>
using namespace std;

void printsoduku(int soduku[][9]){
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            cout<<soduku[i][j]<<" ";
        }
        cout<<endl;
    }
}

bool issafe(int soduku[9][9],int row,int col,int digit){
    // vertical
    for(int i=0;i<9;i++){
        if(soduku[i][col]==digit){
            return false;
        }
    }

    //horizontal
    for(int j=0;j<9;j++){
        if(soduku[row][j]==digit){
            return false;
        }
    }

    // 3*3 grid
    int startrow=(row/3)*3;
    int startcol=(col/3)*3;

    for(int i=startrow;i<=startrow+2;i++){
        for(int j=startcol;j<=startcol+2;j++){
            if(soduku[i][j]==digit){
                return false;
            }
        }
    }
    return true;
}

bool sodukusolver(int soduku[9][9],int row,int col){
    if(row==9){ //soduko solved
        printsoduku(soduku);
        return true;
    }
    int nextrow=row;
    int nextcol=col+1;
    if(col+1==9){
        nextrow=row+1;
        nextcol=0;
    }
    if(soduku[row][col]!=0){
        return sodukusolver(soduku,nextrow,nextcol);
    }
    for(int digit=1;digit<=9;digit++){
        if(issafe(soduku,row,col,digit)){
            soduku[row][col]=digit;
            if( sodukusolver(soduku,nextrow,nextcol)){
                return true;
            }
            soduku[row][col]=0;
        }
    }
    return false;
}
int main(){
    int soduku[9][9]=  {{0,0,8,0,0,0,0,0,0},
                        {4,9,0,1,5,7,0,0,2},
                        {0,0,3,0,0,4,1,9,0},
                        {1,8,5,0,6,0,0,2,0},
                        {0,0,0,0,2,0,0,6,0},
                        {9,6,0,4,0,5,3,0,0},
                        {0,3,0,0,7,2,0,0,4},
                        {0,4,9,0,3,0,0,5,7},
                        {8,2,7,0,0,9,0,1,3}};
    sodukusolver(soduku,0,0);
    return 0;
}
