// #include<iostream>
// #include<stack>
// using namespace std;

// void print(stack<char> st){
//     if(st.size()==0) return;
//     char x=st.top();
//     st.pop();
//     print(st);
//     cout<<x<<" ";
//     st.push(x);
// }
// void removedupli(string s){
//     stack<char> st;
//     for(int i=0;i<s.length();i++){
//         if(st.empty()){
//             st.push(s[i]);
//         }
//         else{
//             if(s[i]==st.top()) continue;
//             else st.push(s[i]);
//         }
//     }
//     print(st);
// }
// int main(){
//     string s ="aaabbcddaabffg" ;  //output should be abcdabfg
//     removedupli(s);
//     return 0;
// }


#include<iostream>
#include<stack>
using namespace std;
string removedupli(string s){
    stack<char> st;
    int n = s.size();
    st.push(s[0]);
    for(int i = 1;i<n;i++){
        if(s[i]==st.top()) continue;
        else st.push(s[i]);
    }
    s = "";
    while(st.size()>0){
        
    }
}
int main(){
    string s="aaabbcddaabffg";
    removedupli(s);
    return 0;
}



























