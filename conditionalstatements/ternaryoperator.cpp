// #include<iostream>
// using namespace std;
// int main(){
//     bool isadult;
//     int age;
//     cout<<"Enter the age: ";
//     cin>>age;
//     isadult=age>=18? true:false;
//     cout<<isadult<<endl;
//     return 0;
// }


#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter a: ";
    cin>>a;
    cout<<"Enter b: ";
    cin>>b;
    int largest= a>=b? a:b;
    cout<<"largest number among both is "<<largest;
    return 0;
}