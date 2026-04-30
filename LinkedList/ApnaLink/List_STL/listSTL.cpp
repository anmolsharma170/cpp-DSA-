#include<iostream>
#include<list>
#include<iterator>
using namespace std;

void printll(list<int> ll){
    list<int>::iterator itr;
    for(itr=ll.begin();itr!=ll.end();itr++){
        cout<<(*itr)<<"->";
    }
    cout<<"NULL\n";
}
int main(){
    list<int> ll;
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
    ll.push_back(4);
    ll.push_back(5);
    ll.push_back(6);
    printll(ll);
    cout<<ll.size()<<endl;
    cout<<"Head: "<<ll.front()<<endl;
    cout<<"Tail: "<<ll.back()<<endl;
    ll.pop_back();
    printll(ll);
    ll.pop_front();
    printll(ll);
    return 0;
}