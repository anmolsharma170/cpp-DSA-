// #include<iostream>
// #include<stack>
// using namespace std;

// void printstack(stack<int> st){
//     stack<int> temp;
//     while(st.size()>0){
//         cout<<st.top()<<" ";
//         temp.push(st.top());
//         st.pop();
//     }
//     while(temp.size()>0){
//         st.push(temp.top());
//         temp.pop();
//     }
//     cout<<endl;
// }

// void pushatbottom(stack<int>& st,int val){
//     stack<int> temp;
//     while(!st.empty()){
//         temp.push(st.top());
//         st.pop();
//     }
//     st.push(val);
//     while(temp.size()>0){
//         st.push(temp.top());
//         temp.pop();
//     }
// }

// void pushatindex(stack<int>& st,int idx,int val){
//     stack<int> temp;
//     while(st.size()>idx){
//         temp.push(st.top());
//         st.pop();
//     }
//     st.push(val);
//     while(temp.size()>0){
//         st.push(temp.top());
//         temp.pop();
//     }
// }
// int main(){
//     stack<int> st;
//     st.push(10);
//     st.push(20);
//     st.push(30);
//     st.push(40);
//     printstack(st);
//     pushatbottom(st,50);
//     printstack(st);
//     // pushatindex(st,2,110);
//     // printstack(st);
//     return 0;
// }

#include<iostream>
#include<stack>
using namespace std;
void display(stack<int> st){
    stack<int> temp;
    while(!st.empty()){
        int ele = st.top();
        cout<<ele<<" ";
        temp.push(ele);
        st.pop();
    }
    cout<<endl;
    while(!temp.empty()){
        int ele = temp.top();
        st.push(ele);
        temp.pop();
    }
}
void pushatbottom(stack<int> &st,int ele){
    stack<int> temp;
    while(!st.empty()){
        temp.push(st.top());
        st.pop();
    }
    st.push(ele);
    while(!temp.empty()){
        st.push(temp.top());
        temp.pop();
    }
}

void pushatidx(stack<int> &st,int ele,int idx){
    stack<int> temp;
    while(st.size()>idx){
        temp.push(st.top());
        st.pop();
    }
    st.push(ele);
    while(!temp.empty()){
        st.push(temp.top());
        temp.pop();
    }
}
int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    display(st);
    pushatbottom(st,0);
    display(st);
    pushatidx(st,-10,0);
    display(st);
    return 0;
}

















