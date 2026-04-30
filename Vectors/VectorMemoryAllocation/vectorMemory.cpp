#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> vec={1,2,3,4};
    cout<<"size: "<<vec.size()<<endl;
    cout<<"capacity: "<<vec.capacity()<<endl;
    vec.push_back(5);
    cout<<vec[4]<<endl;
    for(int i=0;i<vec.size();i++){
        cout<<vec[i]<<" ";
    }
    cout<<endl;
    vec.pop_back();
    for(int i=0;i<vec.size();i++){
        cout<<vec[i]<<" ";
    }
    return 0;
}