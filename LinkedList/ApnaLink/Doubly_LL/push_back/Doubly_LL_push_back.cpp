#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;
    Node* pre;
    Node(int val){
        data=val;
        next=pre=NULL;
    }
};

class doublyll{
public:
    Node* head;
    Node* tail;
    doublyll(){
        head=tail=NULL;
    }
    Node* push_front(int val){
        Node* newnode=new Node(val);
        if(head==NULL){
            head=tail=newnode;
        }
        else{
            newnode->next=head;
            head->pre=newnode;
            head=newnode;
        }
    }

    Node* push_back(int val){
        Node* newnode=new Node(val);
        if(head==NULL){
            head=tail=newnode;
        }
        else{
            tail->next=newnode;
            newnode->pre=tail;
            tail=newnode;
        }
    }
    void printll(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->data<<"<=>";
            temp=temp->next;
        }
        cout<<"NULL\n";
    }
};
int main(){
    doublyll dbll;
    dbll.push_front(5);
    dbll.push_front(4);
    dbll.push_front(3);
    dbll.push_front(2);
    dbll.push_front(1);
    dbll.printll();
    dbll.push_back(6);
    dbll.push_back(7);
    dbll.push_back(8);
    dbll.printll();
    return 0;
}