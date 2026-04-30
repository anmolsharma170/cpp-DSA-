#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node* prev;
    Node(int val){
        this->val=val;
        next=NULL;
        prev=NULL;
    }
};
class Deque{
    public:
    Node* head;
    Node* tail;
    int s;
    Deque(){
        head=NULL;
        tail=NULL;
        s=0;
    }

    void displaylist(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }

    void pushback(int val){
        Node* temp=new Node(val);
        if(s==0) head=tail=temp;
        else{
            tail->next=temp;
            temp->prev=tail;
            tail=temp;
        }
        s++;
    }

    void pushfront(int val){
        Node* temp=new Node(val);
        if(s==0) head=tail=temp;
        else{
            temp->next=head;
            head->prev=temp;
            head=temp;
        }
        s++;
    }
    void popback(){
        if(s==0){
            cout<<"Queue is empty";
            return;
        }
        else if(s==1){
            popfront();
            return;
        }
        Node* temp = tail->prev;
        temp->next  = NULL;
        tail = temp;
        s--;
    }
    
    void popfront(){
        if(s==0){
            cout<<"linked list is empty";
            return;
        }
        head=head->next;
        if(head) head->prev=NULL;
        if(head==NULL) tail=NULL;
        s--;
    }

    int front(){
        if(s==0){
            cout<<"Queue is empty";
            return -1;
        }
        return head->val;
    }
    int back(){
        if(s==0){
            cout<<"Queue is empty";
            return -1;
        }
        return tail->val;
    }
    int size(){
        return s;
    }
    bool isempty(){
        if(s==0) return true;
        else return false;
    }

    
};
int main(){
    Deque dq;
    dq.pushback(10);
    dq.pushback(20);
    dq.pushback(30);
    dq.pushback(40);
    dq.displaylist();
    dq.popfront();
    dq.popback();
    dq.displaylist();
    cout<<dq.front()<<endl;
    cout<<dq.back()<<endl;
    return 0;
}