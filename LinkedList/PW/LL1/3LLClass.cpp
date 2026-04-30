#include<iostream>
using namespace std;
class Node{
public:
    int val;
    Node* next;
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};
class LinkedList{
public:
    Node* head;
    Node* tail;
    int size;
    LinkedList(){
        head=tail=NULL;
        size=0;
    }
    void insertatend(int val){
        Node* temp = new Node(val);
        if(size==0) head=tail=temp;
        else{
            tail->next=temp;
            tail=tail->next;
        }
        size++;
    }
    void display(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
};
int main(){
    LinkedList ll;
    ll.insertatend(10);
    ll.display();
    ll.insertatend(20);
    ll.display();
    ll.insertatend(30);
    ll.display();
    return 0;
}