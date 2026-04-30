// #include<iostream>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node* next;
//     Node* pre;
//     Node(int val){
//         data=val;
//         next=NULL;
//         pre=NULL;
//     }
// };
// class List{
//     public:
//     Node* head;
//     Node* tail;
//     List(){
//         head=NULL;
//         tail=NULL;
//     }

//     void push_back(int val){
//         Node* newnode=new Node(val);
//         if(head==NULL){
//             head=tail=newnode;
//         }
//         else{
//             tail->next=newnode;
//             newnode->pre=tail;
//             tail=newnode;
//         }
//     }

//     void print(){
//         Node* temp=head;
//         while(temp!=NULL){
//             cout<<temp->data<<"<=>";
//             temp=temp->next;
//         }
//         cout<<"NULL\n";
//     }

//     void reverselist(){
//         Node* last=NULL;
//         Node* curr=head;
//         while(curr!=NULL){
//             last=curr->pre;
//             curr->pre=curr->next;
//             curr->next=last;
//             curr=curr->pre;
//         }
//         if(last!=NULL){
//             head=last->pre;
//         }
//     }
// };
// int main(){
//     List ll;
//     ll.push_back(1);
//     ll.push_back(2);
//     ll.push_back(3);
//     ll.push_back(4);
//     ll.push_back(5);
//     ll.print();
//     ll.reverselist();
//     ll.print();
//     return 0;
// }






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
    void displayrev(Node* tail){
        while(tail){
            cout<<tail->val<<" ";
            tail=tail->prev;
        }
    }
int main(){
    Node* a=new Node(10);
    Node* b=new Node(20);
    Node* c=new Node(30);
    Node* d=new Node(40);
    Node* e=new Node(50);
    a->next=b;
    b->next=c;
    c->next=d;
    d->next=e;
    e->prev=d;
    d->prev=c;
    c->prev=b;
    b->prev=a;
    displayrev(e);
    return 0;
}





















