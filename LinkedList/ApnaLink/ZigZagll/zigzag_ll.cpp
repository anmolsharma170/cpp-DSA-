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
};

class List{
public:
    Node* head;
    Node* tail;
    List(){
    head=NULL;
    tail=NULL;
    }
    

    void push_front(int val){
        Node* newnode=new Node(val);
        if(head==NULL){
            head=tail=newnode;
        }
        else{
            newnode->next=head;
            head=newnode;
        
        }
    }
    void push_back(int val){
        Node* newNode=new Node(val);
        if(head==NULL){
            head=tail=newNode;
        } else{
            tail->next=newNode;
            tail=newNode;
        }
    }


};
    void print(Node* head){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<"NULL\n";
    }

Node* splitatmid(Node* head){
    Node* slow=head;
    Node* fast=head;
    Node* prev=NULL;
    while(fast!=NULL && fast->next!=NULL){
        prev=slow;
        slow=slow->next;
        fast=fast->next->next;
    }
    if(prev!=NULL){
        prev->next=NULL;
    }
    return slow;
}

Node* reverse(Node*head){
    Node* prev=NULL;
    Node*curr=head;
    Node* next=NULL;
    while(curr!=NULL){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    return prev;  //prev is head of curr ll
}

Node* zigzagll(Node* head){
    Node* righthead=splitatmid(head);
    Node* rightheadrev=reverse(righthead);

    // alternate merging
    Node* left=head;
    Node*right=rightheadrev;
    Node* tail=right;
    while(left!=NULL && right!=NULL){
        Node* nextleft=left->next;
        Node* nextright=right->next;

        left->next=right;
        right->next=nextleft;
        tail=right;
        left=nextleft;
        right=nextright;
        }
    if(right!=NULL){
        tail->next=right;
    }
    return head;
}


int main(){
    List ll;
    ll.push_front(1);
    ll.push_front(2);
    ll.push_front(3);
    ll.push_front(4);
    ll.push_front(5);
    print(ll.head);
    ll.head=zigzagll(ll.head);
    print(ll.head);
    return 0;
}