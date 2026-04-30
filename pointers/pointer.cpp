/*pointers are special variablr that store address of another variable*/
//size of pointer is 8 bytes

// #include<iostream>
// using namespace std;
// int main(){
//     int a=10;
//     // int *ptr=10;  //error bcoz pointer always stores adress of variable not value like integer
//     int *ptr=&a;
//     cout<<&a<<" = "<<ptr<<"\n";
//     float pi=3.14;
//     float *ptr2=&pi;
//     cout<<ptr2<<" = "<<&pi<<"\n";
//     return 0;
// }



// pointer to pointer

#include<iostream>
using namespace std;
int main(){
    int a=10;
    int *ptr=&a;
    int **pptr=&ptr;
    cout<<pptr<<" = "<<&ptr<<"\n";
    return 0;
}


















