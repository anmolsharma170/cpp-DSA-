
// brute force     tc- O(n^2) sc- O(n)

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={3,1,2,5,4,6,2,3};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     int nge[n];
//     for(int i=0;i<n;i++){
//         nge[i]=-1;
//         for(int j=i+1;j<n;j++){
//             if(arr[j]>arr[i]){
//                 nge[i]=arr[j];
//                 break;
//             }
//         }
//     }
//     for(int i=0;i<n;i++){
//         cout<<nge[i]<<" ";
//     }
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int arr[] = {3,1,2,5,4,6,2,3};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     for(int i =0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     int nge[n];
//     for(int i=0;i<n;i++){
//         nge[i]= -1;
//         for(int j = i+1;j<n;j++){
//             if(arr[j]>arr[i]){
//                 nge[i]=arr[j];
//                 break;
//             }
//         }
//     }
//     for(int i = 0;i<n;i++){
//         cout<<nge[i]<<" ";
//     }
//     return 0;
// }























//  method 2 using stacks
// #include<iostream>
// #include<stack>
// using namespace std;
// int main(){
//     int arr[]={3,1,2,7,4,6,2,3};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     int nge[n];
//     stack<int> st;
//     nge[n-1]=-1;
//     st.push(arr[n-1]);
//     for(int i=n-2;i>=0;i--){
//         while(st.size()>0 && st.top()<=arr[i]){
//             st.pop();
//         }
//         if(st.size()==0) nge[i]=-1;
//         else{
//         nge[i]=st.top();
//         }
//         st.push(arr[i]);
//     }
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     for(int i=0;i<n;i++){
//         cout<<nge[i]<<" ";
//     }
//     return 0;
// }



#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int main(){
    int arr[]={3,1,2,7,4,6,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    int nge[n];
    stack<int> st;
    st.push(arr[n-1]);
    nge[n-1]=-1;
    for(int i=n-2;i>=0;i--){
        while(st.size()>0 && st.top()<=arr[i]) st.pop();
        if(st.size()==0) nge[i] = -1;
        else nge[i] = st.top();
        st.push(arr[i]);
    }
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(int i = 0;i<n;i++){
        cout<<nge[i]<<" ";
    }
    return 0;
}


































