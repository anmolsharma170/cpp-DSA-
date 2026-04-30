// #include<iostream>
// using namespace std;
// class Minheap{
//     public:
//     int arr[50];
//     int idx;
//     Minheap(){
//         idx=1;
//     }
//     int top(){
//         return arr[1];
//     }
//     void push(int x){
//         arr[idx]=x;
//         int i=idx;
//         idx++;
//         while(i!=1){
//             int parent=i/2;
//             if(arr[i]<arr[parent]) swap(arr[i],arr[parent]);
//             else break;
//             i=parent;
//         }
//     }
//     int size(){
//         return idx-1;
//     }

    void pop(){
        idx--;
        arr[1]=arr[idx];
        int i=1;
        while(true){
            int left=2*i,right=2*i+1;
            if(left>idx-1) break;
            if(right>idx-1){
                if(arr[i]>arr[left]){
                    swap(arr[i],arr[left]);
                    i=left;
                }
                else break;
            }
            if(arr[left]<arr[right]){
                if(arr[i]>arr[left]){
                    swap(arr[i],arr[left]);
                    i=left;
                }
                else break;
            }
            else{
                if(arr[i]>arr[right]){
                    swap(arr[i],arr[right]);
                    i=right;
                }
                else break;
            }
        }
    }

//     void display(){
//         for(int i=1;i<=idx-1;i++){
//             cout<<arr[i]<<" ";
//         }
//         cout<<endl;
//     }
// };
// int main(){
//     Minheap pq;
//     pq.push(10);
//     pq.push(2);
//     cout<<pq.size()<<endl;
//     pq.push(1);
//     pq.push(12);
//     pq.display();
//     cout<<pq.size()<<endl;
//     pq.pop();
//     pq.display();
//     cout<<pq.top();
//     return 0;
// }

// #include <iostream>
// #include <iomanip>
// using namespace std;

// void swap(int &x, int &y) { 
//     int temp = x;
//     x = y;
//     y = temp;
// }

// void minHeapify(int heap[], int size, int i) {
//     int smallest = i; 
//     int left = 2 * i + 1;
//     int right = 2 * i + 2;

//     if (left < size && heap[left] < heap[smallest])
//         smallest = left;

//     if (right < size && heap[right] < heap[smallest])
//         smallest = right;

//     if (smallest != i) {
//         swap(heap[i], heap[smallest]);
//         minHeapify(heap, size, smallest);
//     }
// }

// void buildMinHeap(int heap[], int size) {
//     for (int i = size / 2 - 1; i >= 0; i--) {
//         minHeapify(heap, size, i);
//     }
// }

// void insertElement(int heap[], int &size, int value) {
//     heap[size] = value;
//     int i = size;
//     size++;

//     while (i != 0 && heap[(i - 1) / 2] > heap[i]) {
//         swap(heap[i], heap[(i - 1) / 2]);
//         i = (i - 1) / 2;
//     }
// }

// void displayMinHeap(int heap[], int size) {
//     for (int i = 0; i < size; i++) {
//         cout << heap[i] << " ";
//     }
//     cout << endl;
// }

// double averageOfElements(int heap[], int size) {
//     if (size == 0) return 0.0;

//     int sum = 0;
//     for (int i = 0; i < size; i++) {
//         sum += heap[i];
//     }
//     return static_cast<double>(sum) / size;
// }

// int main() {
//     int n;
//     cin >> n;

//     int *heap = new int[n]; // Dynamic memory allocation for heap
//     int size = 0;
    
//     for (int i = 0; i < n; i++) {
//         int value;
//         cin >> value;
//         insertElement(heap, size, value);
//     }

//     buildMinHeap(heap, size);

//     cout << "Min Heap: ";
//     displayMinHeap(heap, size);

//     double average = averageOfElements(heap, size);
//     cout << "Average: " << fixed << setprecision(2) << average << endl;

//     delete[] heap; // Free dynamically allocated memory
//     return 0;
// }



//0 based index inserting

// void insert(int arr[],int n,int val){
//     arr[n]=val;
//     int i=n;
//     n++;
//     while(true){
//         int parent=(i-1)/2;
//         if(arr[i]<arr[parent]){
//             swap(arr[i],arr[parent]);
//         }
//         else break;
//         i=parent;
//     }
// }




































