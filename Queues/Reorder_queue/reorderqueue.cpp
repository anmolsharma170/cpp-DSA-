#include<iostream>
#include<queue>
#include<stack>
using namespace std;

void display(queue<int> q){
    int n=q.size();
    for(int i=0;i<n;i++){
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
}

void reorder(queue<int>& q){
    int n=q.size();
    stack<int> st;
    for(int i=0;i<n/2;i++){
        st.push(q.front());
        q.pop();
    }
    while(st.size()>0){
        q.push(st.top());
        st.pop();
    }
    for(int i=0;i<n/2;i++){
        st.push(q.front());
        q.pop();
    }
    while(st.size()>0){
        int x=st.top();
        st.pop();
        q.push(x);
        q.push(q.front());
        q.pop();
    }

    while(q.size()>0){
        st.push(q.front());
        q.pop();
    }
    while(st.size()>0){
        q.push(st.top());
        st.pop();
    }
}
int main(){
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    q.push(7);
    q.push(8);
    display(q);
    reorder(q);
    display(q);
    return 0;
}
