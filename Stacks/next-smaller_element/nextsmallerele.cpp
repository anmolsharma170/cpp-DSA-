#include<iostream>
#include<stack>
#include<climits>
using namespace std;
int main(){
    int arr[]={2,1,5,6,4,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    int nse[n];
    nse[n-1]=INT_MAX;
    stack<int> st;
    st.push(arr[n-1]);
    for(int i=n-2;i>=0;i--){
        while(st.size()>0 && st.top()>arr[i]) st.pop();
        if(st.size()==0) st.push(INT_MAX);
        else nse[i]=st.top();
        st.push(arr[i]);
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<nse[i]<<" ";
    }
    return 0;
}