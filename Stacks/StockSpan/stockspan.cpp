// #include<iostream>
// #include<vector>
// #include<stack>
// using namespace std;
// void stockspan(vector<int> stock,vector<int> span){
//     stack<int> s;
//     s.push(0);
//     span[0]=1;
//     for(int i=1;i<stock.size();i++){
//         int currprice=stock[i];
//         while(!s.empty() && currprice>=stock[s.top()]){
//             s.pop();
//         }
//         if(s.empty()){
//             span[i]=i+1;
//         }
//         else{
//             int prevhigh=s.top();
//             span[i]=i-prevhigh;
//         }
//     }
//     for(int i=0;i<span.size();i++){
//         cout<<span[i]<<" ";
//     }
//     cout<<endl;
// }
// int main(){
//     vector<int> stock={100,80,60,70,60,85,100};
//     vector<int> span={0,0,0,0,0,0,0};
//     stockspan(stock,span);
//     return 0;
// }





// #include<iostream>
// #include<stack>
// using namespace std;
// int main(){
//     int arr[]={100,80,60,70,60,75,85};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     int pgi[n];
//     stack<int> st;
//     st.push(0);
//     pgi[0]=1;
//     for(int i=1;i<n;i++){
//         while(st.size()>0 && arr[st.top()]<arr[i]){
//             st.pop();
//         }
//         if(st.size()==0) pgi[i]=-1;
//         else{pgi[i]=st.top();}
//         st.push(i);
//         pgi[i]=i-pgi[i];
//     }
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     for(int i=0;i<n;i++){
//         cout<<pgi[i]<<" ";
//     }
//     return 0;
// }

#include<iostream>
#include<stack>
using namespace std;
int main(){
    int arr[]={100,80,60,70,60,75,85};
    stack<int> st;
    int n = sizeof(arr)/sizeof(arr[0]);
    
    return 0;
}













