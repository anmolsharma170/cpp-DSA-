#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next=NULL;
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
    void push_back(int val){
        Node* newnode=new Node(val);
        if(head==NULL){
            head=tail=newnode;
        }
        else{
            tail->next=newnode;
            tail=newnode;
        }
    }
    void printlist(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<"NULL\n";
    }

    void removeduplicates(Node*& head){
        Node* temp=head;
        while(temp!=NULL && temp->next!=NULL){
            if(temp->data==temp->next->data){
                temp->next=temp->next->next;
            }
            else{
            temp=temp->next;
            }
        }
    }
};
int main(){
    List ll;
    ll.push_back(1);
    ll.push_back(2);
    ll.push_back(2);
    ll.push_back(2);
    ll.push_back(3);
    // ll.printlist();
    ll.removeduplicates(ll.head);
    ll.printlist();
    return 0;
}