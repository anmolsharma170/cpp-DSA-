#include<iostream>
#include<vector>
using namespace std;
void duplisubstr(string str,string orig,vector<string>& vec,bool flag){
    if(orig == ""){
        vec.push_back(str);
        return;
    }
    char ch = orig[0];
    if(orig.length()==1){
        if(flag == true) duplisubstr(str+ch,orig.substr(1),vec,true);
        duplisubstr(str,orig.substr(1),vec,true);
        return;
    }
    char c = orig[1];
    if(ch==c){
        if(flag == true) duplisubstr(str+ch,orig.substr(1),vec,true);
        duplisubstr(str,orig.substr(1),vec,false);
    }
    else{
        if(flag == true) duplisubstr(str+ch,orig.substr(1),vec,true);
        duplisubstr(str,orig.substr(1),vec,true);
    }
}
int main(){
    vector<string> v;
    duplisubstr("","aab",v,true);
    for(int i = 0 ;i<v.size();i++){
        cout<<v[i]<<" ";
        cout<<endl;
    }
    return 0;
}