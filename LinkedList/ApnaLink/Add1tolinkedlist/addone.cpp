// 2->9->9 
// +
// 1
// =3->0->0
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
        tail->next=newnode;
        tail=newnode;
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

    // Node* reverse(Node* head){
    //     Node* curr=head;
    //     Node* prev=NULL;
    //     while(curr!=NULL){
    //         Node* next=curr->next;
    //         curr->next=prev;
    //         prev=curr;
    //         curr=next;
    //     }
    //     head=prev;
    //     return prev;
    // }

    // void addone(Node*& head){
    //     head=reverse(head);
    //     Node* temp=head;
    //     int carry=1;
    //     while(temp!=NULL){
    //         temp->data=temp->data+carry;
    //         if(temp->data<10){
    //             carry=0;
    //             break;
    //         }
    //         else{
    //             temp->data=0;
    //             carry=1;
    //         }
    //         temp=temp->next;
    //     }
    //     if(carry==1){
    //         Node* newnode= new Node(1);
    //         newnode->next=head;
    //         head=newnode;
    //     }
    //     else{
    //         head=reverse(head);
    //     }
    // }

    Node* reverse(Node* head){
        Node* curr=head;
        Node* prev=NULL;
        while(curr!=NULL){
            Node* next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        head=prev;
        return head;
    }

    void addone(Node* head){
        head=reverse(head);
        Node* temp=head;
        int carry=1;
        while(temp!=NULL){
            temp->data=temp->data+carry;
            if(temp->data+carry<10){
                carry=0;
                break;
            }
            else{
                carry=1;
                temp->data=0;
            }
            temp=temp->next;
        }
        if(carry==1){
            Node* newnode=new Node(1);
            newnode->next=head;
            head=newnode;
        }
        else{
            head=reverse(head);
        }
    }
};
int main(){
    List l1;
    l1.push_back(9);
    l1.push_back(2);
    l1.push_back(2);
    l1.addone(l1.head);
    l1.print();
    return 0;
}