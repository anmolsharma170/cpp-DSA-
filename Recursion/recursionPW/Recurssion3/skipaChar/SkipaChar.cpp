// #include<iostream>
// using namespace std;
// void skip(string ans,string original){
//     if(original.length()==0){
//         cout<<ans;
//         return;
//     }
//     char ch = original[0];
//     if(ch == 'a') skip(ans,original.substr(1));
//     else skip(ans+ch,original.substr(1));
// }
// int main(){
//     skip("","anmol Sharma");
//     return 0;
// }
// this has a bad time complexity instead use indexing property to traverse string

// #include<iostream>
// using namespace std;
// void removechar(string ans,string original,int idx){
//     if(idx == original.length()){
//         cout<<ans;
//         return;
//     }
//     char ch = original[idx];
//     if(ch == 'a') removechar(ans,original,idx+1);
//     else removechar(ans+ch,original,idx+1);
// }
// int main(){
//     removechar("","anmol sharma",0);
//     return 0;
// }


#include<iostream>
using namespace std;
string removechar(string ans,string orig,int idx){
    if(idx==orig.length()) return ans;
    char ch = orig[idx];
    if(ch=='a') return removechar(ans,orig,idx+1);
    else return removechar(ans+ch,orig,idx+1);
}
int main(){
    string ans="";
    string orig = "aaoaaoaaaooooaoaonmijanmol";
    cout<<removechar(ans,orig,0);
    return 0;
}










































