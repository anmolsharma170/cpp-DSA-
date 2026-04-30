// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter number of rows: ";
//     cin>>n;
//     int m;
//     cout<<"\nEnter number of columns: ";
//     cin>>m;

//     vector<vector<int>> arr(n,vector<int>(m));
//     vector<vector<int>> brr(m,vector<int>(n));
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             cin>>arr[i][j];
//         }
//     }
//     cout<<"original array: \n";
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     cout<<"\n Array after Transpose: \n";
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             brr[j][i]=arr[i][j];
//         }
//     }

//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             cout<<brr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }





















// transpose a sqare matrix of size n*n without using any extra vector/array
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of rows: ";
    cin>>n;
    vector<vector<int>> arr(n,vector<int>(n));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"original array: \n";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"Transpose of matrix: \n";
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(i!=j){
                swap(arr[i][j],arr[j][i]);
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}







