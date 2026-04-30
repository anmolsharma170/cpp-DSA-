// #include<iostream>
// using namespace std;
// int main(){
//     int size;
//     cin>>size;

//     int *arr=new int[size];
//     int x=1;
//     for(int i=0;i<size;i++){
//         arr[i]=x;
//         cout<<arr[i]<<" ";
//         x++;
//     }
//     return 0;
// }

/*
Agar hum kisi function k ander DMA krte hai toh fir toh fir useh humeh khud he delete bhi krna pdta hai
*/

#include<iostream>
using namespace std;
int func(){
    int size;
    cin>>size;

    int *arr=new int[size];
    int x=1;
    for(int i=0;i<size;i++){
        arr[i]=x;
        cout<<arr[i]<<" ";
        x++;
    }
    delete [] arr;
    return 0;}
int main(){
    func();
    return 0;
}