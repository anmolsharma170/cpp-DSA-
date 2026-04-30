#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> vec1;
    cout<<vec1.size()<<endl;
    vector<int> vec2={1,2,3,4};
    cout<<vec2.size()<<endl;
    vector<int> vec3(10,-1);
    for(int i=0;i<vec3.size();i++){
        // cout<<vec3[i]<<" ";
        cout<<(vec3.at(i))<<" ";
    }
    return 0;
}