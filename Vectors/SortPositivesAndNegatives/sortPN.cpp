//Move all negative num to beginning and positive to the end with constant extra space

#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v = {1,-2,3,-4,-5,6,8};
    int i=0;
    int j=v.size()-1;
    while(i<j){
        if(v[i]>0 && v[j]<0){
            swap(v[i],v[j]);
            i++;
            j--;
        }
        if(v[i]<0) i++;
        if(v[j]>0) j--;
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    return 0; 
}