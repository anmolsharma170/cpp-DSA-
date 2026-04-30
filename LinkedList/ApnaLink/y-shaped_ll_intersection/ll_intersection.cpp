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
    int getsize(Node* head){
        int size=0;
        while(head!=NULL){
            head=head->next;
            size++;
        }
        return size;
    }
    Node* intersection(Node* head,Node* head2){
        int m=getsize(head);
        int n=getsize(head2);
        Node* t1=head;
        Node* t2=head2;
        int diff=0;
        if(m>n){
            diff=m-n;
            for(int i=0;i<diff;i++){
                t1=t1->next;
            }
        }
        else{
            diff=n-m;
            for(int i=0;i<diff;i++){
                t2=t2->next;
            }
        }
        while(t1!=NULL && t2!=NULL && t1!=t2){
            t1=t1->next;
            t2=t2->next;
        }
        if(t1==NULL){
            return NULL;
        }
        else{
            return t1;
        }
    }

};
    void printlist(Node* head){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<"NULL\n";
    }
int main(){
    Node* head=new Node(1);
    head->next=new Node(2);
    head->next->next=new Node(3);
    Node* head2=new Node(9);
    head2->next=new Node(10);
    Node* common=new Node(15);
    common->next=new Node(30);
    common->next->next=new Node(45);
    head->next->next->next=common;
    head2->next->next=common;
    printlist(head);
    printlist(head2);
    List ll;
    Node* intersectionnode=ll.intersection(head,head2);
    if(intersectionnode){
        cout<<"intersection node found "<<intersectionnode->data;
    }
    else{
        cout<<"No intersection node found";
    }
    return 0;
}