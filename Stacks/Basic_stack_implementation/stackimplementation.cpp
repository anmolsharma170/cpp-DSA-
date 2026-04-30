#include<iostream>
#include<vector>
using namespace std;

class Stack{
    vector<int> vec;
public:
    void push(int val){
        vec.push_back(val);
    }
    void pop(){
        if(isempty()){
            cout<<"Stack is empty";
        }
        vec.pop_back();
    }

    int top(){
        int lastidx=vec.size()-1;
        return vec[lastidx];
    }

    bool isempty(){
        return vec.size()==0;
    }
};
int main(){
    Stack s;
    s.push(3);
    s.push(2);
    s.push(1);
    while(!s.isempty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
}