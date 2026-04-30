// Question 1 :Print the number of all 7’s that are in the 2d array.
// Example:
// Input-intarr[][]={{4,7,8},{8,8,7}};n=2,m=3
// Output-2
// #include<iostream>
// using namespace std;

// int occurence(int arr[][3],int n,int m,int num){
//     int count=0;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             if(arr[i][j]==num){
//                 count+=1;
//             }
//         }
//     }
//     cout<<"number of occuernce = "<<count<<endl;
// }
// int  main(){
//     int arr[2][3]= {{4,7,8},
//                     {8,8,7}};
//     occurence(arr,2,3,7);
//     return 0;
// }





/*
Question 2 :Print out the sum of the numbers in the second row of the “nums” array.
Example:
Input-int nums[][]={{1,4,9},{11,4,3},{2,2,3}};
Output-18
*/

// #include<iostream>
// using namespace std;
// int sum(int arr[][3],int n){
//     int sum=0;
//     // for(int i=1;i<=1;i++){
//     //     for(int j=0;j<n;j++){
//     //         sum+=arr[i][j];
//     //     }
//     // }
//     for(int j=0;j<n;j++){
//         sum+=arr[1][j];
//     }
//     cout<<"Sum of 2nd row: "<<sum<<endl;
// }
// int main(){
//     int nums[3][3]= {{1,4,9},
//                     {11,4,3},
//                     {2,2,3}};
//     sum(nums,3);
//     return 0;
// }


/*
Question 3 : Write a program to Find Transpose of a Matrix.
What is Transpose?
Transpose of a matrix is the process of swapping the rows to columns. For a 2x3
matrix,
Matrix
a11 a12 a13
a21 a22 a23
Transposed Matrix
a11 a21
a12 a22
a13 a23
*/

// #include<iostream>
// using namespace std;
// void transpose(int arr[][3],int n,int m){
//     int trans[m][n];
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             trans[i][j]=arr[j][i];
//         }
//     }
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             cout<<trans[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }
// int main(){
//     int arr[2][3]={
//         {1,2,3},
//         {4,5,6}
//     };
//     transpose(arr,2,3);
//     return 0;
// }











