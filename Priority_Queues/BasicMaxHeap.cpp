// #include<iostream>
// #include<queue>
// using namespace std;
// int main(){
//     priority_queue<int> pq;
//     pq.push(10);
//     pq.push(2);
//     pq.push(-6);
//     pq.push(81);
//     cout<<pq.top()<<endl;
//     pq.pop();
//     cout<<pq.top()<<endl;
//     return 0;
// }

#include<iostream>
#include<queue>
using namespace std;
int main(){
    priority_queue<int> pq;
    pq.push(10);
    pq.push(20);
    pq.push(30);
    pq.push(40);
    pq.push(50);
    cout<<pq.top()<<endl;
    while(pq.size()>0){
        cout<<pq.top()<<" ";
        pq.pop();
    }
    return 0;
}