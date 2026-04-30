/* agar hmare pass sorted matrix given ho toh hum 3 tarike se question solve ke skte hai

1) brute force
2) binary search
3) Stair case
*/

// Stair case
                        // {{10,20,30,40}, is question ko stair case se bhi 2trah se solve kr skte hai
                        // {15,25,35,45},  kyuki is question mai 2 special cell hai eak 40 place wala dusra 32
                        // {27,29,37,48},  1st code 40 place wali approach se hai
                        // {32,33,39,50}};


// #include<iostream>
// using namespace std;

// bool searchbystaircase(int mat[][4],int n,int m,int key){
//     // int start=mat[0][m-1];
//     int i=0,j=m-1;
//     while(i<n && j>0){
//     if(mat[i][j]==key){
//         cout<<"found at cell: ("<<i<<","<<j<<")"<<endl;
//         return true;
//     }
//     else if(key>mat[i][j]){
//         i++;
//     }
//     else{
//         j--;
//     }
//     }
//     cout<<"Key not found";
//     return false;

// }
// int main(){
//     int matrix[4][4]=   {{10,20,30,40},
//                         {15,25,35,45},
//                         {27,29,37,48},
//                         {32,33,39,50}};
//     searchbystaircase(matrix,4,4,33);
//     return 0;
// }




// 2nd approach through 32 wali cell

#include<iostream>
using namespace std;
bool searchbystaircase(int mat[][4],int n,int m,int key){
    int i=n-1;
    int j=0;
    while(i<n && j>=0){
    if(mat[i][j]==key){
        cout<<"key found at cell: ("<<i<<","<<j<<")"<<endl;
        return true;
    }
    else if(key>mat[i][j]){
        j++;
    }
    else{
        i--;
    }
    }
    cout<<"key not found";
    return false;
}
int main(){
    int matrix[4][4]=   {{10,20,30,40},
                        {15,25,35,45},
                        {27,29,37,48},
                        {32,33,39,50}};
    searchbystaircase(matrix,4,4,33);
    return 0;
}