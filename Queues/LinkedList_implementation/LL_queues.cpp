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
class Queue{
    public:
    Node* head;
    Node* tail;
    int size;
    Queue(){
        head=NULL;
        tail=NULL;
        size=0;
    }
    void push(int x){                 //insert at tail
        Node* newnode=new Node(x);
        if(size==0){
            head=tail=newnode;
        }
        else{
            tail->next=newnode;
            tail=tail->next;
        }
        size++;
    }

    void pop(){    //delete at head
        if(head==NULL){
            cout<<"Queue is empty";
        }
        else{
            head=head->next;
            size--;
        }
    }

    int front(){
        if(size==0){
            cout<<"Queue is empty";
            return -1;
        }
        return head->data;
    }
    int back(){
        if(size==0){
            cout<<"Queue is empty";
            return -1;
        }
        return tail->data;
    }

    void display(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
};
int main(){
    Queue q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.display();
    q.push(60);
    q.display();
    q.push(70);
    q.display();
    return 0;
}