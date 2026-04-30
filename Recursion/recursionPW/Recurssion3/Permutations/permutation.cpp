#include<iostream>
#include<string>
#include<vector>
using namespace std;
void permutations(string ans,string original){
    if(original.length()==0){
        cout<<ans<<endl;
        return;
    }
    for(int i=0;i<original.length();i++){
        char ch = original[i];

        string left = original.substr(0,i);
        string right = original.substr(i+1);
        permutations(ans+ch,left+right);
    }
}
int main(){
    string a  = "abc";
    permutations("",a);
    return 0;
}