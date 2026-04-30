// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// int main(){
//     vector<int> v = {1,1,0,1,0,1,1,0};
//     int i=0;
//     int j=v.size()-1;                          //wrong code but will work for some arrays
//     while(i<j){
//         if(v[i]==0) i++;
//         if(v[j]==1) j--;

//         if(v[i]==1 && v[j]==0){
//             int temp=v[i];
//             v[i]=v[j];
//             v[j]=temp;
//             i++;
//             j--;
//         }
//     }
//     for(int i=0;i<v.size();i++){
//         cout<<v[i]<<" "; 
//     }
//     return 0; 
// }


// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// int main(){
//     vector<int> v = {1,1,0,1,0,1,1,0};
//     int i=0;
//     int j=v.size()-1; 
//     while(i<j){
//         if(v[i]==0) i++;
//         if(v[j]==1) j--;
//         if(i>j) break;                    //add this line 
//         if(v[i]==1 && v[j]==0){
//             int temp=v[i];
//             v[i]=v[j];
//             v[j]=temp;
//             i++;
//             j--;
//         }
//     }
//     for(int i=0;i<v.size();i++){
//         cout<<v[i]<<" "; 
//     }
//     return 0; 
// }


#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> v = {1,1,0,1,0,1,1,0};
    int i=0;
    int j=v.size()-1; 
    while(i<j){
        if(v[i]==1 && v[j]==0){
            int temp=v[i];
            v[i]=v[j];
            v[j]=temp;
            i++;
            j--;
        }
        if(v[i]==0) i++;
        if(v[j]==1) j--;                
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" "; 
    } 
    return 0; 
}