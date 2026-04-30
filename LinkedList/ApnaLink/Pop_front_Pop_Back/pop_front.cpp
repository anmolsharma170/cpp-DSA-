// #include<iostream>
// using namespace std;

// class Node{
// public:
//     int data;
//     Node* next;
//     Node(int val){
//         data=val;
//         next=NULL;
//     }
//     ~Node(){
//         if(next!=NULL){
//             delete next;
//             next=NULL;
//         }
//     }
// };

// class List{
//     Node* head;
//     Node* tail;
// public:
//     List(){
//         head=NULL;
//         tail=NULL;
//     }

//     ~List(){
//         delete head;
//         head=NULL;
//     }

//     void pushback(int val){
//         Node* newnode=new Node(val);
//         if(head==NULL){
//             head=tail=newnode;
//         }
//         else{
//             tail->next=newnode;
//             tail=newnode;
//         }
//     }

//     void printlist(){
//         Node* temp=head;
//         while(temp!=NULL){
//             cout<<temp->data<<"->";
//             temp=temp->next;
//         }
//         cout<<"NULL\n";
//     }
    

//     void insert(int val,int pos){
//         Node* newnode=new Node(val);
//         Node* temp=head;
//         for(int i=0;i<pos-1;i++){
//             temp=temp->next;
//         }
//         newnode->next=temp->next;
//         temp->next=newnode;
//     }

//     void pop_front(){
//         if(head==NULL){
//             cout<<"LL is empty";
//             return;
//         }
//         Node* temp=head;
//         head=head->next;
//         temp->next=NULL;
//         delete temp;

//     }

// };
// int main(){
//     List ll;
//     ll.pushback(3);
//     ll.pushback(5);
//     ll.pushback(6);
//     ll.insert(100,2);
//     ll.printlist();
//     ll.pop_front();
//     ll.printlist();

//     return 0;
// }