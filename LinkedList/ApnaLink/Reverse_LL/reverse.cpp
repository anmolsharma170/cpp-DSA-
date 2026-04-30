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

    void reverse(){
        Node* curr=head;
        Node* prev=NULL;
        while(curr!=NULL){
            Node* next=curr->next;
            curr->next=prev;

            prev=curr;
            curr=next;
        }
        head=prev;
    }
};

int main(){
    List ll;
    ll.push_front(1);
    ll.push_front(2);
    ll.push_front(3);
    ll.push_front(4);
    ll.printll();
    ll.reverse();
    ll.printll();
    return 0;
}