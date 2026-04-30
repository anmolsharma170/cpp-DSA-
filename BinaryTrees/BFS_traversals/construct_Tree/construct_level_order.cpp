// #include<iostream>
// #include<queue>
// #include<climits>
// using namespace std;
// class Node{
//     public:
//     int val;
//     Node* left;
//     Node* right;
//     Node(int val){
//         this->val=val;
//         this->left=NULL;
//         this->right=NULL;
//     }
// };


// Node* construct(int arr[],int n){
//     queue<Node*> q;
//     Node* root=new Node(arr[0]);
//     q.push(root);
//     int i=1;
//     int j=2;
//     while(q.size()>0 && i<n){
//         Node* temp=q.front();
//         q.pop();
//         Node* l;
//         Node* r;
//         if(arr[i]!=INT_MIN)  l=new Node(arr[i]);
//         else l=NULL;
//         if(j!=n && arr[j]!=INT_MIN) r= new Node(arr[j]);
//         else r=NULL;
//         temp->left=l;
//         temp->right=r;
//         if(l!=NULL) q.push(l);
//         if(r!=NULL) q.push(r);
//         i+=2;
//         j+=2;
//     }
//     return root;
// }

// void nthlevel(Node* root,int curr,int level){
//     if(root==NULL) return;
//     if(curr==level){
//         cout<<root->val<<" ";
//         return;                                        // to avoid extra calls
//     }
//     nthlevel(root->left,curr+1,level);
//     nthlevel(root->right,curr+1,level);
// }
// void preorder(Node* root){
//     if(root==NULL) return;
//     cout<<root->val<<" ";
//     preorder(root->left);
//     preorder(root->right);
// }

// int levels(Node* root){
//     if(root==NULL) return 0;
//     return 1+max(levels(root->left),levels(root->right));
// }

// int main(){
//     int arr[]={1,2,3,4,5,INT_MIN,6,INT_MIN,INT_MIN,7,8,9,INT_MIN};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     Node* x=construct(arr,n);
//     preorder(x);
//     cout<<endl;
//     nthlevel(x,1,3);
//     cout<<endl;
//     cout<<levels(x);
//     return 0;
// }


#include<iostream>
#include<queue>
#include<limits.h>
using namespace std;
class Node{
    public:
    int val;
    Node* left;
    Node* right;
    Node(int val){
        this->left=NULL;
        this->right=NULL;
        this->val=val;
    }
};
Node* construct(int arr[],int n){
    queue<Node*> q;
    Node* root=new Node(arr[0]);
    q.push(root);
    int i=1;
    int j=2;
    while(q.size()>0 && i<n){
        Node* temp=q.front();
        q.pop();
        Node* l;
        Node* r;
        if(i<n && arr[i]!=INT_MIN) l=new Node(arr[i]);
        else l=NULL;
        if(j<n && arr[j]!=INT_MIN) r=new Node(arr[j]);
        else r=NULL;
        temp->left=l;
        temp->right=r;
        if(l!=NULL) q.push(l);
        if(r!=NULL) q.push(r);
        i+=2;
        j+=2;
    }
    return root;
}

void inorder(Node* root){
    if(root==NULL) return;
    inorder(root->left);
    cout<<root->val<<" ";
    inorder(root->right);
}
int main(){
    int arr[]={1,2,3,4,5,INT_MIN,6,INT_MIN,INT_MIN,7,8,9,INT_MIN};
    int n=sizeof(arr)/sizeof(arr[0]);
    Node* x=construct(arr,n);
    inorder(x);
    return 0;
}






















