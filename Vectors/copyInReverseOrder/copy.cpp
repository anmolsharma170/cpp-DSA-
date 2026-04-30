//using an extra array

// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int> v={1,2,3,4,5,6};
//     vector<int> v1(v.size());
//     for(int i=0;i<v.size();i++){
//         int j=v.size()-i-1;
//         v1[i]=v[j];
//     }
//     for(int i=0;i<v.size();i++){
//         cout<<v1[i]<<" ";
//     }
//     return 0;
// }


// without using extra array
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int> v={1,2,3,4,5,6};
//     int i=0;
//     int j=v.size()-1;
//     int half=v.size()/2;
//     while(i<=j){   //we can also use i<=j
//         int x=v[i];
//         v[i]=v[j];
//         v[j]=x;
//         i++;
//         j--;
//     }
//     for(int i=0;i<v.size();i++){
//         cout<<v[i]<<" ";
//     }
//     return 0;
// }

//without extra space using for loop
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v={1,2,3,4,5,6};
    for(int i=0,j=v.size()-1;i<=j;i++,j--){
        int temp=v[i];
        v[i]=v[j];
        v[j]=temp;
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    return 0;
}