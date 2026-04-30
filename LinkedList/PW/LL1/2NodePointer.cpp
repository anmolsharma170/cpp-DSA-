// #include<iostream>
// using namespace std;
// class Node{
// public:
//     int val;
//     Node* next;
//     Node(int val){
//         this->val=val;
//         this->next=NULL;
//     }
// };
// int main(){
//     Node* a = new Node(10);
//     Node* b = new Node(20);
//     Node* c = new Node(30);
//     Node* d = new Node(40);
//     a->next = b;
//     b->next = c;
//     c->next = d;
//     Node* temp = a;
//     while(temp!=NULL){
//         cout<<temp->val<<" ";
//         temp=temp->next;
//     }
//     return 0;
// }

#include<iostream>
using namespace std;
class Node{
public:
    int val;
    Node* next;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};
void display(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int size(Node* head){
    if(head==NULL) return 0;
    int count = 0;
    Node* temp = head;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    return count;

}
void displayrecursive(Node* head){
    Node* temp = head;
    if(temp==NULL) return;
    cout<<temp->val<<" ";
    displayrecursive(temp->next);
}
void displayreverse(Node* head){
    Node* temp = head;
    if(temp==NULL) return;
    displayreverse(temp->next);
    cout<<temp->val<<" ";
}
int main(){
    Node* a = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);
    Node* e = new Node(50);
    Node* f = new Node(60);
    a->next=b;
    b->next=c;
    c->next=d;
    d->next=e;
    e->next=f;
    // display(a);
    // cout<<size(a)<<endl;
    // displayrecursive(a);
    cout<<endl;
    displayreverse(a);
    cout<<endl;
    return 0;
}
