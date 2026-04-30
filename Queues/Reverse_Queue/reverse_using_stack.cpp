// #include<iostream>
// #include<stack>
// #include<queue>
// using namespace std;
// void display(queue<int>& q){
//     int n=q.size();
//     for(int i=0;i<n;i++){
//         int x=q.front();
//         cout<<x<<" ";
//         q.pop();
//         q.push(x);
//     }
//     cout<<endl;
// }

// void reverse(queue<int>& q){
//     stack<int> st;
//     while(q.size()>0){
//         int x=q.front();
//         st.push(x);
//         q.pop();
//     }
//     while(st.size()>0){
//         q.push(st.top());
//         st.pop();
//     }
// }
// int main(){
//     queue<int> q;
//     q.push(10);
//     q.push(20);
//     q.push(30);
//     q.push(40);
//     q.push(50);
//     display(q);
//     reverse(q);
//     display(q);
//     return 0;
// }




// #include<iostream>
// #include<queue>
// #include<stack>
// using namespace std;

// void rmevenposi(queue<int>& q ){
//     int n=q.size();
//     for(int i=0;i<n;i++){
//         if(i%2==0) q.pop();
//         else{
//             int x=q.front();
//             q.pop();
//             q.push(x);
//         }
//     }
// }
// void displayqueue(queue<int> q){
//     int n=q.size();
//     for(int i=0;i<n;i++){
//         int x=q.front();
//         cout<<x<<" ";
//         q.pop();
//         q.push(x);
//     }
//     cout<<endl;
// }
// //reverse a queue using stack
// void reversequeue(queue<int>& q){
//     stack<int> st;
//     while(q.size()>0){
//         int x=q.front();
//         st.push(x);
//         q.pop();
//     }
//     while(st.size()>0){
//         q.push(st.top());
//         st.pop();
//     }
// }
// int main(){
//     queue<int> q;
//     q.push(10);
//     q.push(20);
//     q.push(30);
//     q.push(40);
//     displayqueue(q);
//     reversequeue(q);
//     displayqueue(q);
//     rmevenposi(q);
//     displayqueue(q);
//     return 0;
// }
