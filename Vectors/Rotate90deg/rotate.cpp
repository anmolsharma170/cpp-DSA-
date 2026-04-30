#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<vector<int>> vec = {{1,2,3},{4,5,6},{7,8,9}};
    int n = vec.size();
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<vec[i][j]<<" ";
        }
        cout<<endl;
    }
    // cout<<endl;
    cout<<"Transpose of matrix: \n";
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(i!=j){
                swap(vec[i][j],vec[j][i]);
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<vec[i][j]<<" ";
        }
        cout<<endl;
    }

    for(int k=0;k<n;k++){
        int i=0;
        int j=n-1;
        while(i<j){
            int x = vec[k][j];
            vec[k][j]=vec[k][i];
            vec[k][i]=x;
        }
        i++;
    }
    cout<<"After 90 deg rotation: \n";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<vec[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}