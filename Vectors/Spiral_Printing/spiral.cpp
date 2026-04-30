#include<iostream>
#include<vector>
using namespace std;
int main(){
    int m;
    cout<<"Enter number of rows: ";
    cin>>m;
    int n;
    cout<<"Enter number of columns: ";
    cin>>n;
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    
    int minrow=0;
    int maxrow=m-1;
    int mincol=0;
    int maxcol=n-1;
    while(minrow<=maxrow && mincol<=maxcol){
        for(int j=mincol;j<=maxcol;j++){
            cout<<arr[minrow][j]<<" ";
        }
        minrow++;
        if(minrow>maxrow || mincol>maxcol) break;
        for(int i=minrow;i<=maxrow;i++){
            cout<<arr[i][maxcol]<<" ";
        }
        maxcol--;
        if(minrow>maxrow || mincol>maxcol) break;
        for(int j=maxcol;j>=mincol;j--){
            cout<<arr[maxrow][j]<<" ";
        }
        maxrow--;
        if(minrow>maxrow || mincol>maxcol) break;
        for(int i=maxrow;i>=minrow;i--){
            cout<<arr[i][mincol]<<" ";
        }
        mincol++;
    }
    
    return 0;
}