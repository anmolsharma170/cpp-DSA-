#include<iostream>
using namespace std;

class minheap{
    public:
    int arr[50];
    int idx;
    minheap(){
        idx=1;
    }

    int top(){
        return arr[idx];
    }

    void push(int x){
        arr[idx]=x;
        int i=idx;
        idx++;
        while(i!=1){
            int parent=i/2;
            if(arr[i]>arr[parent]){
                swap(arr[i],arr[parent]);
            }
            else break;
            i=parent;
        }
    }

    void pop(){
        
    }

    int size(){
        return idx-1;
    }
    void display(){
        for(int i=1;i<=idx-1;i++){
            cout<<arr[i]<<" ";
        }
    }
};


int main(){
    minheap pq;
    pq.push(10);
    pq.push(2);
    pq.push(14);
    pq.push(11);
    pq.push(1);
    pq.push(4);
    pq.display();
    return 0;
}
