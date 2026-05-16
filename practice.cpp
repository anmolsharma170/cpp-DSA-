#include<iostream>
using namespace std;
class MinHeap{
    public:
        int arr[50];
        int idx;
        MinHeap(){
            idx = 1;
        }
        int top(){
            return arr[1];
        }
        void push(int x){
            arr[idx] = x;
            int i = idx;
            idx++;
        }
};
int main(){

    return 0;
}