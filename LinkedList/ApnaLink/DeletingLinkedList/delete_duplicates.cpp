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
    void printlist(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<"NULL\n";
    }

    // void deleteduplicates(Node* head){
    //     if(head==NULL){
    //         return;
    //     }
    //     Node* currnode=head;
    //     while(currnode!=NULL){
    //         Node* temp=currnode;
    //         while(temp->next!=NULL){
    //             if(temp->next->data==currnode->data){
    //                 Node* duplicatenode=temp->next;
    //                 temp->next=temp->next->next;
    //                 delete duplicatenode;
    //             }
    //             else{
    //                 temp=temp->next;
    //             }
    //         }
    //         currnode=currnode->next;
    //     }
    // }

    void deleteduplicates(Node* head){
        if(head==NULL){
            return;
        }
        Node* currnode=head;
        while(currnode!=NULL){
            Node* temp=currnode;
            while(temp->next!=NULL){
                if(temp->next->data==currnode->data){
                    Node* duplicatenode=temp->next;
                    temp->next=temp->next->next;
                    delete duplicatenode;
                }
                else{
                    temp=temp->next;
                }
            }
            currnode=currnode->next;
        }
    }
};
int main(){
    List ll;
    ll.push_back(1);
    ll.push_back(2);
    ll.push_back(3);
    ll.push_back(4);
    ll.push_back(3);
    ll.push_back(5);
    ll.push_back(2);
    ll.printlist();
    ll.deleteduplicates(ll.head);
    ll.printlist();
    return 0;
}