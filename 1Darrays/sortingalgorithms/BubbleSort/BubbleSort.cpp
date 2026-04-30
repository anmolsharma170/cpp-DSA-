// Timecomplexity=O(n^2)
// this approach is ok but if array is already sorted than we dont have to check every conditions 
// we will make outer loop run only one time and inner loop also if there is no swap in innerloop than we will directly print our sorted array
// check that code at line 40

// #include<iostream>
// using namespace std;
// int print(int *arr,int n){
//     cout<<"Sorted array: ";
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }
// int bubblesort(int *arr,int n){
//     for (int i=0;i<n;i++){
//         for(int j=0;j<n-i-1;j++){
//             if(arr[j]>arr[j+1]){
//                 swap(arr[j],arr[j+1]);
//             }
//         }
//     }
//     print(arr,n);
// }

// int main(){
//     int arr[5]={5,4,1,3,2};
//     int n=sizeof(arr)/sizeof(int);
//     cout<<"Given Array: ";
//     for (int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<"\n";
//     bubblesort(arr,n);
//     return 0;
// }




// #include<iostream>
// using namespace std;
// int print(int *arr,int n){
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }
// void bubblesort(int *arr,int n){
//     for(int i=0;i<n;i++){
//         bool isSwap=false;  //means abhi hume koi swap nhi kiye
//         for(int j=0;j<n-i-1;j++){
//             if(arr[j]<arr[j+1]){
//                 swap(arr[j],arr[j+1]);
//                 isSwap=true;
//             }
//         }
//         if(!isSwap){
//             //array is already sorted
//             break;
//         }
//     }
//     print(arr,n);
// }
// int main(){
//     int arr[5]={5,4,1,3,2};
//     int n=sizeof(arr)/sizeof(int);
//     bubblesort(arr,n);
//     return 0;
// }

// #include<iostream>
// #include<vector>
// using namespace std;
// vector<int> bubblesort(vector<int> arr){
//     int n = arr.size();
//     for(int i=0;i<n-1;i++){
//         bool flag = true;
//         for(int j=0;j<n-1-i;j++){
//             if(arr[j]>arr[j+1]){
//                 swap(arr[j],arr[j+1]);
//                 flag = false;
//             }
//         }
//         if(flag) break;
//     }
//     return arr;
// }
// int main(){
//     vector<int> arr = {-99,-19,0,66,-1,-4,55,2};
//     vector<int> ans = bubblesort(arr);
//     for(int i=0;i<ans.size();i++){
//         cout<<ans[i]<<" ";
//     }
//     return 0;
// }


//sort a string in decending after removal of elemnents smaller than X.
// #include<iostream>
// #include<vector>
// #include<string>
// using namespace std;
// int main(){
//     string s = "AZYZXBDJKX";
//     string ans = "";
//     for(int i=0;i<s.length();i++){
//         if(s[i]<'X'){
//             continue;
//         }
//         else{
//             ans.push_back(s[i]);
//         }
//     }
//     cout<<ans;

//     return 0;
// }


//put zeros at end of array while maintaing relative order of the array
#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
    vector<int> arr = {0,2,3,4,0,0,5,1};
    for(int i=0;i<arr.size()-1;i++){
        for(int j=0;j<arr.size()-1-i;j++){
            if(arr[j]==0){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}