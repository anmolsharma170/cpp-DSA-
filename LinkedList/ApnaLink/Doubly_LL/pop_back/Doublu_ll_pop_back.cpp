#include<iostream>
using namespace std;
class Node{
public:
    int data;
    Node* pre;
    Node* next;
    Node(int val){
        data=val;
        pre=next=NULL;
    }
};
class doublyll{
public:
    Node* head;
    Node* tail;
    doublyll(){
        head=tail=NULL;
    }
    void pop_front(){
        Node*temp=head;
        head=head->next;
        if(head!=NULL){
            head->pre=NULL;
        }
            temp->next=NULL;
            delete temp;
    }
    void push_front(int val){
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

    // void pop_back(){
    //     Node* temp=tail;
    //     tail=tail->pre;
    //     if(tail!=NULL){
    //         tail->next=NULL;
    //     }
    //     temp->pre=NULL;
    //     delete temp;
    // }

    void popback(){
        Node* temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->pre->next=NULL;
        delete temp;
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
    dbll.popback();
    dbll.printll();
    return 0;
}








































