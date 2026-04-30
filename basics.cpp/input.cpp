// #include<iostream>
// using namespace std;
// int main(){
//     int age;
//     cout<<"Enter your age: ";
//     cin>>age;
//     cout<<"Your age is: "<<age<<endl;
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int a;
//     cout<<"Enter a: ";
//     cin>>a;
//     int b;
//     cout<<"Enter b: ";
//     cin>>b;
//     int sum=a+b;
//     int product=a*b;
//     int difference=a-b;
//     cout<<"Sum of a and b is: "<<sum<<endl;
//     cout<<"Product of a and b is: "<<product<<endl;
//     cout<<"Difference of a and b is: "<<difference<<endl;
//     return 0;
// }


// input output of 3 cost and adding 18%gst on it
#include<iostream>
using namespace std;
int main(){
    float costA;
    float costB;
    float costC;
    cout<<"Enter costA";
    cin>>costA;
    cout<<"Enter costB";
    cin>>costB;
    cout<<"Enter costC";
    cin>>costC;
    float taxcostA= 18.0/100.0*costA+costA;
    float taxcostB=18.0/100.0*costB+costB;
    float taxcostC=18.0/100.0*costC+costC;
    cout<<"cost of A after tax: "<<taxcostA<<endl; 
    cout<<"cost of B after tax: "<<taxcostB<<endl; 
    cout<<"cost of C after tax: "<<taxcostC<<endl; 
    return 0;
}






