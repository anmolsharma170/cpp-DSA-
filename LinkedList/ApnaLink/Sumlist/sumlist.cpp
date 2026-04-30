// 3->5->NULL
// 4->5->9->9->NULL
// ye 2 ll diye hai hume dono ko add krke list ka head return krna h

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
};
    void sumlist(List l1,List l2, List& result){
        Node* t1=l1.head;
        Node* t2=l2.head;
        Node* dummy=new Node(-1);
        Node* currnode=dummy;
        int carry=0;
        while(t1!=NULL || t2!=NULL ){
            int sum=carry;
            if(t1){
                sum+=t1->data;
            }
            if(t2){
                sum+=t2->data;
            }
            Node* newnode=new Node(sum%10);
            carry=sum/10;
            currnode->next=newnode;
            currnode=currnode->next;
            if(t1){
                t1=t1->next;
            }
            if(t2){
                t2=t2->next;
            }
        }
        if(carry){
            Node* newnode=new Node(carry);
            currnode->next=newnode;
        }
        result.head=dummy->next;
        result.tail=currnode;
        delete dummy;
    }
int main(){
    List l1;
    l1.push_back(3);
    l1.push_back(5);
    l1.printlist();
    List l2;
    l2.push_back(4);
    l2.push_back(5);
    l2.push_back(9);
    l2.push_back(9);
    l2.printlist();
    List l3;
    sumlist(l1,l2,l3);
    l3.printlist();
    return 0;
}