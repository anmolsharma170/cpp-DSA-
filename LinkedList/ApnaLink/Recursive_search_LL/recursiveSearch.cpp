#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;
    Node(int val){
        data=val;
        next=NULL;
    }
    ~Node(){
        if(next!=NULL){
            delete next;
            next=NULL;
        }
    }
};

class List{
    Node* head;
    Node* tail;
public:
    List(){
        head=NULL;
        tail=NULL;
    }
    ~List(){
        if(head!=NULL){
            delete head;
            head=NULL;
        }
    }

    void push_front(int val){
        Node* newnode=new Node(val);
        if(head==NULL){
            head=tail=newnode;
        }
        else{
            Node* temp=head;
            newnode->next=head;
            head=newnode;
        }
    }

    void printll(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<"NULL\n";
    }

    int helper(Node* temp,int key){
        if(temp==NULL){
            return -1;
        }
        if(temp->data==key){
            return 0;
        }
        int idx=helper(temp->next,key);
        if(idx==-1){
            return -1;
        }
        return idx+1;
    }

    int recursive(int key){
        return helper(head,key);
    }
};

int main(){
    List ll;
    ll.push_front(7);
    ll.push_front(6);
    ll.push_front(1);
    ll.push_front(0);
    ll.printll();
    cout<<ll.recursive(6);
    return 0;
}