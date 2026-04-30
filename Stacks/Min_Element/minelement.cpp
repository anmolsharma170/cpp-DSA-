// brute force  
// tc=O(n) sc=O(n)

// #include<iostream>
// #include<stack>
// #include<vector>
// #include<climits>
// using namespace std;
// class Stack{
//     vector<int> vec;
// public:
//     void push(int val){
//         vec.push_back(val);
//     }
//     void pop(){
//         vec.pop_back();
//     }
//     int top(){
//         int lastidx=vec.size()-1;
//         return vec[lastidx];
//     }
//     int getmin(stack<int> a){
//         stack<int> st;
//         int mn=INT_MAX;
//         while(a.size()>0){
//             st.push(a.top());
//             mn=min(mn,a.top());
//             a.pop();
//         }
//         return mn;
//     }
// };
// int main(){
//     stack<int> a;
//     a.push(5);
//     a.push(4);
//     a.push(2);
//     a.push(1);
//     a.push(0);
//     a.getmin(a);
//     return 0;
// }

// 2nd method
// tc=O(1) sc=O(n)
// #include<stack>
// #include<iostream>
// using namespace std;
// class MinStack {
// public:
//     stack<int> st;
//     stack<int> helper;
//     MinStack() {
        
//     }
//     void push(int val){
//         st.push(val);
//         if(helper.size()==0 || val<helper.top()) helper.push(val);
//         else helper.push(helper.top());
//     }
//     void pop(){
//         helper.top();
//         st.top();
//     }
//     int top(){
//         return st.top();
//     }
//     int minele(){
//         return helper.top();
//     }
// };


// third method
// tc=O(n)  sc=O(1)
// #include<stack>
// #include<iostream>
// #include<vector>
// using namespace std;
// class MinStack {
// public:
//     vector<int> vec;
//     MinStack() {
        
//     }
//     void push(int val){
//         vec.push_back(val);
//     }
//     void pop(){
//         vec.pop_back();
//     }
//     int top(){
//         return vec[vec.size()-1];
//     }
//     int minele(){
//         int mn=vec[0];
//         for(int i=0;i<vec.size();i++){
//             mn=min(mn,vec[i]);
//         }
//         return mn;
//     }
// };

















