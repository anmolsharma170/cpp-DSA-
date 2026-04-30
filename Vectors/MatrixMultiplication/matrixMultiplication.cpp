// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     int m;
//     cout<<"Enter number of rows in first matrix: ";
//     cin>>m;
//     int n;
//     cout<<"\nEnter number of columns in first matrix: ";
//     cin>>n;
//     int p;
//     cout<<"\nEnter number of rows in second matrix: ";
//     cin>>p;
//     int q;
//     cout<<"\nEnter number of columns in second matrix: ";
//     cin>>q;
//     if(n!=p){
//         cout<<"Matrix multiplication cannot be performed.";
//     }
//     else{
//         cout<<"\nEnter the elements of first matrix: \n";
//         int arr[m][n];
//         for(int i=0;i<m;i++){
//             for(int j=0;j<n;j++){
//                 cin>>arr[i][j];
//             }
//         }
//         cout<<"\nEnter the elements of second matrix: \n";
//         int brr[p][q];
//         for(int i=0;i<p;i++){
//             for(int j=0;j<q;j++){
//                 cin>>brr[i][j];
//             }
//         }
//         int res[m][q];
//         cout<<"\nResultant matrix: \n";
//         for(int i=0;i<m;i++){
//             for(int j=0;j<q;j++){
//                 res[i][j]=0;
//                 for(int k=0;k<n;k++){
//                     res[i][j]+=arr[i][k]*brr[k][j];
//                 }
//             }
//         }
//         for(int i=0;i<m;i++){
//             for(int j=0;j<q;j++){
//                 cout<<res[i][j]<<" ";
//             }
//             cout<<endl;
//         }
//     }
//     return 0;
// }


#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<vector<int>> arr={{1,2,3},{4,5,6}};
    vector<vector<int>> brr = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    int m=arr.size();
    int n=arr[0].size();
    int p = brr.size();
    int q = brr[0].size();
    vector<vector<int>> res(m,vector<int>(q));
    for(int i=0;i<m;i++){
        for(int j=0;j<q;j++){
            res[i][j]=0;
            for(int k=0;k<n;k++){
                res[i][j]+=arr[i][k]*brr[k][j];
            }
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<q;j++){
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}