// #include<iostream>
// #include<queue>
// using namespace std;
// int main(){
//     queue<int> q;
//     q.push(1);
//     q.push(2);
//     q.push(3);
//     q.push(4);
//     q.push(5);
//     q.push(6);
//     cout<<q.front()<<endl;
//     cout<<q.back();
//     return 0;
// }


// Display queue
#include<iostream>
#include<queue>
using namespace std;
void display(queue<int>& q){
    int n=q.size();
    for(int i=0;i<n;i++){
        int x=q.front();
        cout<<x<<" ";
        q.pop(); 
        q.push(x);
    }
    cout<<endl;
}
int main(){
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    display(q);
    q.pop();
    display(q);
    return 0;
}






























