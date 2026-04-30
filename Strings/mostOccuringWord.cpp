#include<iostream>
#include<string>
#include<vector>
#include<sstream>
using namespace std;
int main(){
    string str = "Anmol is a boy. He is 20 years old.";
    vector<string> arr;
    stringstream ss(str);
    string temp;
    while(ss>>temp){
        arr.push_back(temp);
    }
    cout<<"[";
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<"]";
    return 0;
}