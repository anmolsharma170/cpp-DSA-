#include<iostream>
#include<string>
using namespace std;
bool ispalin(string s,int i,int j){
    if(i>j) return true;
    if(s[i]!=s[j]) false;
    else return ispalin(s,i+1,j-1);
}
int main(){
    string s = "racecar";
    cout<<ispalin(s,0,s.length()-1);
    return 0;
}