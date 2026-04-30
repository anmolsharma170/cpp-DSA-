#include<iostream>
#include<stack>
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
public:
    Node* head;
    Node* tail;
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
    // Node* reverse(Node* head){
    //     Node* curr=head;
    //     Node* pre=NULL;
    //     while(curr!=NULL){
    //         Node* next= curr->next;
    //         curr->next=pre;
    //         pre=curr;
    //         curr=next;
    //     }
    //     head=pre;
    //     return head;
    // }

    // bool ispalin(Node* head){
    //     if(head==NULL || head->next==NULL){
    //         return true;
    //     }
    //     Node* slow=head;
    //     Node* fast=head;
    //     while(fast!=NULL && fast->next!=NULL){
    //         slow=slow->next;
    //         fast=fast->next->next;
    //     }
    //     Node* newhead=reverse(slow->next);
    //     Node* first=head;
    //     Node* second=newhead;
    //     while(second!=NULL){
    //         if(first->data!=second->data){
    //             reverse(newhead);
    //             return false;
    //         }
    //         first=first->next;
    //         second=second->next;
    //     }
    //     reverse(newhead);
    //     return true;
    // }


// brute force  time complexity O(n) space complexity O(n)
    // bool ispalin(){
    //     stack<int> s;
    //     Node* temp=head;
    //     while(temp!=NULL){
    //         s.push(temp->data);
    //         temp=temp->next;
    //     }
    //     Node* temp2=head;
    //     while(temp2!=NULL){
    //         if(temp2->data != s.top()){
    //             return false;
    //         }
    //         temp2=temp2->next;
    //         s.pop();
    //     }
    //     return true;
    // }
Node* reverse(Node* head){
    Node* curr=head;
    Node* prev=NULL;
    while(curr!=NULL){
        Node* next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    head=prev;
    return head;
}

bool ispalin(Node* head){
    if(head==NULL || head->next==NULL){
        return true;
    }
    Node* slow=head;
    Node* fast=head;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    Node* newhead=reverse(slow->next);
    Node* first=head;
    Node* second=newhead;
    while(second!=NULL){
        if(first->data!=second->data){
            reverse(newhead);
            return false;
        }
        first=first->next;
        second=second->next;
    }
    reverse(newhead);
    return true;
}

};
int main(){
    List ll;
    ll.push_front(1);
    ll.push_front(2);
    ll.push_front(2);
    ll.push_front(1);
    if(ll.ispalin(ll.head)==1){
        cout<<"linked list is a palindrome";
    }
    else{
        cout<<"Not a palindrome";
    }
    return 0;
}