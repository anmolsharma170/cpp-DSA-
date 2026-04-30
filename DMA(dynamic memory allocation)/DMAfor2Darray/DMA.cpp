#include<iostream>
using namespace std;
int main(){
    int rows,column;
    cout<<"Enter the rows: ";
    cin>>rows;
    cout<<"Enter the columns: ";
    cin>>column;
    int* *matrix= new int*[rows];
    for(int i=0;i<rows;i++){
        matrix[i]=new int[column];
    }
    int x=1;
    for(int i=0;i<rows;i++){
        for(int j=0;j<column;j++){
            matrix[i][j]=x;
            cout<<matrix[i][j]<<" ";
            x++;
        }
        cout<<endl;
    }
    cout <<matrix[2][2]<<endl;
    cout<<*(*(matrix+2)+2);
    return 0;
}