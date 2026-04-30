#include<iostream>
#include<vector>
using namespace std;
void sortmerged(vector<int> v,vector<int> v1){
    int m=v.size();
    int n=v1.size();
    vector<int> v2(0);
    int i=0;
    int j=0;
    int k=0;
    while(i<n && j<m){
        if(v[i]<v1[j]){
            v2[i]=v[i];
            i++;
            k++;
        }
        else{
            v2[i]=v1[j];
            j++;
            k++;
        }
    }
    if(i==n){
        while(j<=m-1){
            v2[k]=v1[j];
            k++;
            j++;
        }
    }
    else{
        while(i<=n-1){
            v2[k]=v[i];
            i++;
            k++;
        }
    }
    for(int i=0;i<v2.size();i++){
        cout<<v2[i]<<" ";
    }

}
int main(){
    vector<int> v={1,2,3,0,0,0};
    vector<int> v2={2,5,6};
    sortmerged(v,v2);
    return 0;
}