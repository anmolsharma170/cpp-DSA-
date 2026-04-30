// #include<iostream>
// using namespace std;
// int main(){
//     int a=5;
//     int *ptr=&a;
//     cout<<ptr<<endl;  //this will give us address of a
//     int arr[]={1,2,3,4,5};
//     cout<<arr<<endl;  //this will also give us address and that will be of 1st element of the array
//     //to chexk this we can derefernce
//     cout<<*arr<<endl;
//     cout<<*(arr+1)<<endl;
//     cout<<*(arr+2)<<endl;
//     cout<<*(arr+3)<<endl;
//     cout<<*(arr+4)<<endl; //therefore we can say that we have 2 ways to access array elements arr[0] or *arr  , arr[0] or *(arr+1)
//     return 0;
// }


//jab bhi array to a function pass hote hai they are always passed by refference
#include<iostream>
using namespace std;
int arr2(int arr[]){  //---arr2 and arr3 function both do same task here
    arr[0]=2000;
}
int arr3(int *ptr){  
    ptr[0]=1000;
}
int main(){
    int arr[]={1,2,3,4,5};
    arr3(arr);
    arr2(arr);
    cout<<arr[0]<<endl;
    return 0;
}
