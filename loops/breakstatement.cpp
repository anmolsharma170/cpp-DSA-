// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number: ";
//     cin>>n;
//     int i=0;
//     while(i<n){
//         if(i==4){
//             break;
//         }
//         cout<<i<<" ";
//         i++;
//     }
//     cout<<"out of loop due to break statement";

//     return 0;
// }

//Wap where user can keep entering numbers till they enter a multiple of 10.
//is code mai jaise he isko 10 ka multiple milega tabhi he code khatam hoga nhi toh chlta rhaga enter number your number
#include<iostream>
using namespace std;
int main(){
    int n;
    do{
        cout<<"Enter number: ";
        cin>>n;
        if(n%10==0){
            break;
        }
        else{
            cout<<"Your number: "<<n<<endl;
        }
    }
    while(true);
    return 0;
}




















