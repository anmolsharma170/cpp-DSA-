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

    void push_back(int val){
        Node* newnode=new Node(val);
        if(head==NULL){
            head=tail=newnode;
        }
        else{
        Node* temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=newnode;
    }
    }
    void print(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<"NULL\n";
    }

    void swapnodes(){
        Node* first = head;
        Node* dummy = new Node(0);
        Node* prev = dummy;
        prev->next = head;
        
        while(first!=NULL && first->next!=NULL)
        {   Node* second = first ->next;  
            Node* future = first ->next->next; 
            second->next = first;
            prev->next = second;
            first ->next = future;
            prev = first;
            first = future;
        }
        head=dummy->next;
    }
};
int main(){
    List ll;
    ll.push_back(1);
    ll.push_back(2);
    ll.push_back(3);
    ll.push_back(4);
    ll.push_back(5);
    ll.print();
    ll.swapnodes();
    ll.print();
    return 0;
}