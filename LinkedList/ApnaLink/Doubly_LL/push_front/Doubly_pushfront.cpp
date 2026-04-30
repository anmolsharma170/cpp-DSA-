#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;
    Node* prev;
    Node(int val){
        data=val;
        next=prev=NULL;
    }
};

class doublylist{
public:
    Node* head;
    Node* tail;
    doublylist(){
        head=tail=NULL;
    }

    Node* push_front(int val){
        Node* newnode=new Node(val);
        if(head==NULL){
            head=tail=newnode;
        }
        else{
            newnode->next=head;
            head->prev=newnode;
            head=newnode;
        }
    }

    void printll(Node* head){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->data<<"<=>";
            temp=temp->next;
        }
        cout<<"NULL";
    }
};
int main(){
    doublylist dbll;
    dbll.push_front(5);
    dbll.push_front(4);
    dbll.push_front(3);
    dbll.push_front(2);
    dbll.push_front(1);
    dbll.printll(dbll.head);
    return 0;
}