//            1 2 3
//            4 5 6     ----->>>>   1 2 3 6 5 4 7 8 9
//            7 8 9



// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     int m;
//     cout<<"Enter no of rows: ";
//     cin>>m;
//     int n;
//     cout<<"Enter no of colms: ";
//     cin>>n;
//     int arr[m][n];
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             cin>>arr[i][j];
//         }
//     }
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             cout<<arr[i][j]<<" ";
//         }
//     }
//     cout<<endl;
//     for(int i=0;i<m;i++){
//         if(i%2==0){
//             for(int j=0;j<n;j++){
//                 cout<<arr[i][j]<<" ";
//             }
//         }
//         else{
//             for(int j=n-1;j>=0;j--){
//                 cout<<arr[i][j]<<" ";
//             }
//         }
//     }
//     return 0;
// }



//            1 2 3
//            4 5 6     ----->>>>   7 8 9 6 5 4 1 2 3
//            7 8 9

// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     int m;
//     cout<<"Enter number of rows: ";
//     cin>>m;
//     int n;
//     cout<<"Enter number of columns: ";
//     cin>>n;
//     int arr[m][n];
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             cin>>arr[i][j];
//         }
//     }

//     for(int i=m-1;i>=0;i--){
//         if(i%2==0){
//             for(int j=0;j<n;j++){
//                 cout<<arr[i][j]<<" ";
//             }
//         }
//         else{
//             for(int j=n-1;j>=0;j--){
//                 cout<<arr[i][j]<<" ";
//             }
//         }
//     }
//     return 0;
// }





//            1 2 3
//            4 5 6     ----->>>>   1 4 7 2 5 8 3 6 9
//            7 8 9

// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     int m;
//     cout<<"Enter number of rows: ";
//     cin>>m;
//     int n;
//     cout<<"Enter number of columns: ";
//     cin>>n;
//     int arr[m][n];
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             cin>>arr[i][j];
//         }
//     }
//     for(int j=0;j<n;j++){
//         for(int i=0;i<m;i++){
//             cout<<arr[i][j]<<" ";
//         }
//     }
//     return 0;
// }




//            1 2 3
//            4 5 6     ----->>>>   1 4 7 8 5 2 3 6 9
//            7 8 9

#include<iostream>
#include<vector>
using namespace std;
int main(){
    int m;
    cout<<"Enter number of rows: ";
    cin>>m;
    int n;
    cout<<"Enter number of columns: ";
    cin>>n;
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    for(int j=0;j<n;j++){
        if(j%2==0){
            for(int i=0;i<m;i++){
                cout<<arr[i][j]<<" ";
            }
        }
        else{
            for(int i=m-1;i>=0;i--){
                cout<<arr[i][j]<<" ";
            }
        }
    }
    return 0;
}