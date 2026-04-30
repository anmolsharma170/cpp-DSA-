/* increment and decrement
ptr++
ptr--
 */


// address difference will be of 4 bytes when using int ,for character address diff would be 1 byte


// #include<iostream>
// using namespace std;
// int main(){
//     int n=13;
//     int *ptr=&n;
//     cout<<ptr<<"\n";
//     ptr++;
//     cout<<ptr<<"\n";
//     return 0;
// }



// #include<iostream>
// using namespace std;
// int main(){
//     char ch='a';
//     char *ptr= &ch;
//     cout<<(void*)ptr<<"\n";
//     ptr++;
//     cout<<(void*)ptr<<"\n";
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int a=5;
//     int *ptr=&a;
//     cout<<ptr<<endl;  //1st aur last address same hoga
//     ptr++;
//     cout<<ptr<<endl;
//     ptr--;
//     cout<<ptr<<endl;

//     return 0;
// }



// ptr+3
// ptr-3
// #include<iostream>
// using namespace std;
// int printarr(int *ptr,int n){
//     for (int i=0;i<n;i++){
//         cout<<*(ptr+i)<<"\n";
//     }
// }
// int main(){
//     int arr[]={1,2,3,4,5};
//     int n=sizeof(arr)/sizeof(int);
//     printarr(arr,n);
//     return 0;
// }





// ptr1+ptr2 invalid operation
// ptr1-ptr2 valid if same type of ptr

// #include<iostream>
// using namespace std;
// int main(){
//     int a=5;
//     int *ptr=&a;
//     int *ptr2=ptr+3;
//     cout<<ptr2<<"\n";
//     cout<<ptr<<"\n";
//     cout<<ptr2-ptr<<"\n";
//     return 0;
// }


// for arrays
#include<iostream>
using namespace std;
int main(){
    int arr[20]={1,2,3,4,5};
    int *ptr=arr;
    int *ptr2=ptr+3;
    cout<<*ptr<<"\n";
    cout<<*ptr2<<"\n";
    cout<<ptr2-ptr<<"\n";
    return 0;
}



































