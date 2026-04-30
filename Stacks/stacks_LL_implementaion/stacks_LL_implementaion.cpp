// Isey hum 2 tarike se kar skte hai 1 toh stl list se aur josra basic se start kr ke

// 1>> Using STL

// #include<iostream>
// #include<vector>
// #include<string>
// #include<list>
// using namespace std;
// template<class T> 
// class Stack{
//     list<T> ll;
//     public:
//         void push(T val){
//             ll.push_back(val);
//         }
//         void pop(){
//             ll.pop_back();
//         }
//         T top(){
//             return ll.back();
//         }
//         bool isempty(){
//             return ll.size()==0;
//         }
// };
// int main(){
//     Stack<int> s;
//     s.push(3);
//     s.push(2);
//     s.push(1);
//     while(!s.isempty()){
//         cout<<s.top()<<" ";
//         s.pop();
//     }
//     return 0;
// }


// without using STL
#include<iostream>
#include<vector>
#include<string>
using namespace std;
template<class T>
class Node{
    public:
    T data;
    Node<T>* next;
        Node(T val){
            data=val;
            next=NULL;
        }
};
template<class T>
class Stack{
    Node<T>* head;
    public:
        Stack(){
            head=NULL;
        }
    void push(T val){
        Node<T>* newnode=new Node<T>(val);
        if(head==NULL){
            head=newnode;
        }
        else{
            newnode->next=head;
            head=newnode;
        }
    }
    void pop(){
        Node<T>* temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;
    }
    T top(){
        return head->data;
    }
    bool isempty(){
        return head==NULL;
    }
};
int main(){
    Stack<int> s;
    s.push(3);
    s.push(2);
    s.push(1);
    while(!s.isempty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
}

















