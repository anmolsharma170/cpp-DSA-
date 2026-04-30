#include<iostream>
#include<queue>
#include<climits>
using namespace std;
class Node{
    public:
    int val;
    Node* left;
    Node* right;
    Node(int val){
        this->val=val;
        this->left=NULL;
        this->right=NULL;
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
        if(arr[i]!=INT_MIN){
            l=new Node(arr[i]);
        }
        else l=NULL;
        if(j<n && arr[j]!=INT_MIN){
            r=new Node(arr[j]);
        }
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

int sumofallnodes(Node* root){
    if(root==NULL) return 0;
    return root->val+sumofallnodes(root->left)+sumofallnodes(root->right);
}

void inorder(Node* root){
    if(root==NULL) return;
    cout<<root->val<<" ";
    inorder(root->left);
    inorder(root->right);
}

int sizeoftree(Node* root){
    
    if(root==NULL) return 0;
    return 1+sizeoftree(root->left)+sizeoftree(root->right);
}

int maxvalnode(Node* root){
    
    if(root==NULL) return 0;
    return max(root->val,max(maxvalnode(root->left),maxvalnode(root->right)));
}

int nooflevels(Node* root){
    
    if(root==NULL) return 0;
    return 1+max(nooflevels(root->left),nooflevels(root->right));
}

void nthlevel(Node* root,int curr,int level){
    
    if(root==NULL) return;
    if(curr==level){
        cout<<root->val<<" ";
        return;
    }
    nthlevel(root->left,curr+1,level);
    nthlevel(root->right,curr+1,level);
}

void levelorder(Node* root){
    cout<<"\nLevel order traversal: \n";
    int n=nooflevels(root);
    for(int i=1;i<=n;i++){
        nthlevel(root,1,i);
        cout<<endl;
    }
}
int main(){
    int arr[]={1,2,3,4,5,6,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    Node* root=construct(arr,n);
    inorder((root));
    cout<<endl;
    cout<<sumofallnodes(root);
    cout<<endl;
    cout<<sizeoftree(root);
    cout<<endl;
    cout<<maxvalnode(root);
    cout<<endl;
    cout<<nooflevels(root);
    cout<<endl<<endl;
    levelorder(root);
    return 0;
}