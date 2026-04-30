#include<iostream>
#include<vector>
using namespace std;
int inversion(vector<int>& a,vector<int>& b){
    int count = 0;
    int i=0,j=0;
    while(i<a.size() && j<b.size()){
        if(a[i]>b[j]){
            count+=(a.size()-i);
            j++;
        }
        else{
            i++;
        }
    }
    return count;
}
void merge(vector<int>& a,vector<int>& b,vector<int>& v){
    int i =0,j=0,k=0;
    while(i<a.size() && j<b.size()){
        if(a[i]<b[j]){
            v[k] = a[i];
            i++;
            k++;
        }
        else{
            v[k]=b[j];
            j++;
            k++;
        }
    }
    while(i<a.size()){
        v[k]=a[i];
        k++;
        i++;
    }
    while(j<b.size()){
        v[k]=b[j];
        k++;
        j++;
    }
}
int mergesort(vector<int>& v){
    int count = 0;
    int n = v.size();
    if(n==1) return 0;
    int n1 = v.size()/2;
    int n2 = v.size()-n1;
    vector<int> a(n1);
    vector<int> b(n2);
    for(int i = 0;i<n1;i++){
        a[i]=v[i];
    }
    for(int i = 0;i<n2;i++){
        b[i]=v[n1+i];
    }
    count+=mergesort(a);
    count+=mergesort(b);
    count+=inversion(a,b);
    merge(a,b,v);
    return count;
}
int main(){
    vector<int> v = {5,1,8,2,3};
    int n = mergesort(v);
    // for(int i = 0;i<v.size();i++){
    //     cout<<v[i]<<" ";
    // }
    cout<<n;
    return 0;
}