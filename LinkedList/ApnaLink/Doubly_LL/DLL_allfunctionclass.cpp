#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node* prev;
    Node(int val){
        this->val=val;
        next=NULL;
        prev=NULL;
    }
};
class DLL{
    public:
    Node* head;
    Node* tail;
    int size;
    DLL(){
        head=NULL;
        tail=NULL;
        size=0;
    }

    void displaylist(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }

    void insertattail(int val){
        Node* temp=new Node(val);
        if(size==0) head=tail=temp;
        else{
            tail->next=temp;
            temp->prev=tail;
            tail=temp;
        }
        size++;
    }

    void insertathead(int val){
        Node* temp=new Node(val);
        if(size==0) head=tail=temp;
        else{
            temp->next=head;
            head->prev=temp;
            head=temp;
        }
        size++;
    }

    void insertatindex(int idx,int val){
        if(idx<0 || idx>size) cout<<"Invalid index\n";
        else if(idx==0) insertathead(val);
        else if(idx==size) insertattail(val);
        else{
            Node* t=new Node(val);
            Node* temp=head;
            for(int i=0;i<=idx-1;i++){
                temp=temp->next;
            }
            t->next=temp->next;
            temp->next=t;
            t->prev=temp;
            t->next->prev=t;
            size++;
        }
    }
    void deleteathead(){
        if(size==0){
            cout<<"linked list is empty";
            return;
        }
        head=head->next;
        if(head) head->prev=NULL;
        if(head==NULL) tail=NULL;
        size--;
    }

    void deleteatindex(int idx){
        if(size==0){
            cout<<"List is empty";
            return ;
        }
        else if(idx<0 || idx>=size){
            cout<<"Invalid index";
            return;
        }
        else{
            Node* temp=head;
            for(int i=0;i<idx-1;i++){
                temp=temp->next;
            }
            temp->next=temp->next->next;
            temp->next->prev=temp;
            size--;
        }
    }

    // int getatindex(int idx){
    //     if(idx<0 || idx>=size){
    //         cout<<"Invalid index";
    //         return -1;
    //     }
    //     else if(idx==0) return head->val;
    //     else if(idx==size-1) return tail->val;
    //     else{
    //         Node* temp=head;
    //         for(int i=0;i<idx-1;i++){
    //             temp=temp->next;
    //         }
    //         return temp->next->val;
    //     }
    // }

    // slightly optimised getatindex
    
    int getatindex(int idx){
        if(idx<0 || idx>=size){
            cout<<"Invalid index";
            return -1;
        }
        else if(idx==0) return head->val;
        else if(idx==size-1) return tail->val;
        else{
            if(idx<size/2){
                Node* temp=head;
                for(int i=0;i<idx-1;i++){
                    temp=temp->next;
                }
                return temp->next->val;
            }
            else{
                Node* temp=tail;
                for(int i=1;i<size-idx;i++){
                    temp=temp->prev;
                }
                return temp->val;
            }
        }
    }
};
int main(){
    DLL ll;
    ll.insertattail(5);
    ll.displaylist();
    ll.insertathead(4);
    ll.displaylist();
    ll.insertatindex(2,6);
    ll.displaylist();
    ll.deleteathead();
    ll.displaylist();
    ll.insertattail(2);
    ll.insertattail(3);
    ll.insertattail(4);
    ll.insertattail(5);
    ll.displaylist();
    ll.deleteatindex(2);
    ll.displaylist();
    cout<<ll.getatindex(2);
    return 0;
}