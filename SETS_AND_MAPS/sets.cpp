#include<iostream>
#include<unordered_set>
using namespace std;
int main(){
    unordered_set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);
    cout<<s.size()<<endl;
    s.insert(1);
    cout<<s.size()<<endl;
    for(int ele: s){
        cout<<ele<<" ";
    }
    s.erase(2);
    cout<<endl;
    cout<<s.size()<<endl;
    for(int ele: s){
        cout<<ele<<" ";
    }
    cout<<endl;
    // To check if an element exist in the array
    int target=4;
    if(s.find(target)!=s.end()){
        cout<<target<<" Exists"<<endl;
    }
    else cout<<"Does not exist\n";
    return 0;
}




















