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

    // int getsize(){
    //     int sz=0;
    //     Node* temp=head;
    //     while(temp!=NULL){
    //         temp=temp->next;
    //         sz++;
    //     }
    //     return sz;
    // }

    // void remove(int n){
    //     int size=getsize();
    //     Node* pre=head;
    //     for(int i=1;i<size-n;i++){
    //         pre=pre->next;
    //     }
    //     Node* todel=pre->next;
    //     cout<<"going to delete: "<<todel->data<<endl;
    //     pre->next=pre->next->next;
    // }
    Node* removenth(int n){
        int size=0;
        Node* temp=head;
        while(temp!=NULL){
            temp=temp->next;
            size++;
        }
        if(size==0){
            return NULL;
        }
        else if(size==n){
            Node* newhead=head->next;
            delete head;
            return newhead;
        }
        Node* prev=head;
        for(int i=1;i<size-n;i++){
            prev=prev->next;
        }
        prev->next=prev->next->next;
    }
};

int main(){
    List ll;
    ll.push_front(1);
    ll.push_front(2);
    ll.push_front(3);
    ll.push_front(4);
    ll.printll();
    ll.removenth(2);
    ll.printll();

    
    return 0;
}





























// approach 2 better fast and slow pointer
// Node* slow = head;
// Node* fast= head;
// for(int i=1;i<=n+1;i++){
//     if(fast==NULL){
//         return head->next;
//     }
//     fast=fast->next;
// }
// while(fast!=NULL){
//     fast=fast->next;
//     slow=slow->next;
// }
// slow->next=slow->next->next;
// return head;