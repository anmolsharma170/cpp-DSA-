// First approach 
// using 3 stacks    


// #include<iostream>
// #include<stack>
// using namespace std;

// void printstack(stack<int> st){
//     stack<int> temp;
//     while(st.size()>0){
//         // cout<<st.top()<<" ";
//         temp.push(st.top());
//         st.pop();
//     }
//     while(temp.size()>0){
//         cout<<temp.top()<<" ";
//         st.push(temp.top());
//         temp.pop();
//     }
// }
// int main(){
//     stack<int> st;
//     stack<int> st1;
//     stack<int> st2;
//     st.push(10);
//     st.push(20);
//     st.push(30);
//     st.push(40);
//     st.push(50);
//     printstack(st);
//     while(st.size()>0){
//         st1.push(st.top());
//         st.pop();
//     }
//     while(st1.size()>0){
//         st2.push(st1.top());
//         st1.pop();
//     }
//     while(st2.size()>0){
//         st.push(st2.top());
//         st2.pop();
//     }
//     cout<<endl;
//     printstack(st);
//     return 0;
// }



// 2nd approach is by storing elements in any other data structure ll/vector/array















































// #include<iostream>
// #include<stack>
// #include<string>
// using namespace std;

// void push_at_bottom(stack<int> &s,int val){
//     if(s.empty()){
//         s.push(val);
//         return ;
//     }
//     int temp=s.top();
//     s.pop();
//     push_at_bottom(s,val);
//     s.push(temp);
// }

// void reverse(stack<int> &s){
//     if(s.empty()){
//         return;
//     }
//     int temp=s.top();
//     s.pop();
//     reverse(s);
//     push_at_bottom(s,temp);
// }

// void printstack(stack<int> s){
//     while(!s.empty()){
//         cout<<s.top()<<" ";
//         s.pop();
//     }
//     cout<<"\n";
// }

// int main(){
//     stack<int> s;
//     s.push(3);
//     s.push(2);
//     s.push(1);
//     push_at_bottom(s,4);
//     printstack(s);
//     reverse(s);
//     printstack(s);
//     return 0;
// }





























