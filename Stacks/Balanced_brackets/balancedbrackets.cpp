// #include<iostream>
// #include<stack>
// using namespace std;

// bool isbalanced(string s){
//     if(s.length()%2!=0) return false;
//     stack<char> st;
//     for(int i=0;i<s.length();i++){
//         if(s[i]=='('){
//             st.push(s[i]);
//         }
//         else{
//             if(st.size()==0) return false;
//             else st.pop();
//         }
//     }
//     if(st.size()==0) return true;
//     else return false;
// }
// int main(){
//     string s=")((())))";
//     cout<<isbalanced(s);
//     return 0;
// }



#include<iostream>
#include<stack>
using namespace std;
bool isbalanced(string s){
    int n = s.length();
    if(n%2!=0) return false;
    stack<char> st;
    for(int i = 0;i<n;i++){
        if(s[i]=='('){
            st.push(s[i]);
        }
        else if(s[i]==')' && st.size()==0) return false;
        else{
            if(s[i]==')' && st.top()=='('){
                st.pop();
            }
        }
    }
    if(st.size()==0) return true;
    return false;
}
int main(){
    string s = "()(()())";
    if(isbalanced(s)) cout<<"string is balanced  brackets";
    else cout<<"string is not balanced";
    return 0;
}




























