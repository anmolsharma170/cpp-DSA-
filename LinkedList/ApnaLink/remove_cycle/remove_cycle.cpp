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
            newnode->next=head;
            head=newnode;
        
        }
    }


};
    void printl(Node* head){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<"NULL\n";
    }

void removecycle(Node* head){
    Node* slow=head;
    Node* fast=head;
    bool iscycle=false;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    if(slow==fast){
        cout<<"Cycle exists\n";
        iscycle=true;
        break;
    }
    }

    if(!iscycle){
        cout<<"Cycle does not exist\n";
        return;
    }
    slow=head;
    if(slow==fast){
        while(fast->next!=slow){
            fast=fast->next;
        }
        fast->next=NULL;
    }
    else{
        Node* prev=fast;
        while(slow!=fast){
            slow=slow->next;
            prev=fast;
            fast=fast->next;
        }
        prev->next=NULL;
    }

}


int main(){
    List ll;
    ll.push_front(5);
    ll.push_front(4);
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
    ll.tail->next=ll.head;
    removecycle(ll.head);
    printl(ll.head);
    removecycle(ll.head);
    return 0;
}