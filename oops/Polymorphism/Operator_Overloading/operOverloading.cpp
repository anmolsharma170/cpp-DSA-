// #include<iostream>
// #include<string>
// using namespace std;

// class Complex{
//     int real,imaginary;
// public:
//     Complex(int r,int i){
//         real=r;
//         imaginary=i;
//     }

//     void shownum(){
//         cout<<real<<"+"<<imaginary<<"i\n";
//     }

//     Complex operator +(Complex &c2){
//         int resreal=this->real+c2.real;
//         int resimg=this->imaginary+c2.imaginary;
//         Complex c3(resreal,resimg);
//         return c3;
//         // c3.shownum();
//     }
// };
// int main(){
//     Complex c1(5,6);
//     Complex c2(7,8);
//     c1.shownum();
//     c2.shownum();
//     // c1+c2;
//     Complex c3= c1 + c2;
//     c3.shownum();
//     return 0;
// }








#include<iostream>
#include<string>
using namespace std;

class Complex{
    int real, imaginary;
public:
    Complex(int r,int i){
        real=r;
        imaginary=i;
    }

    void show(){
        cout<<real<<"+"<<imaginary<<"i\n";
    }

    Complex operator -(Complex &c2){
        int realres=this->real-c2.real;
        int imgres=this->imaginary-c2.imaginary;
        Complex c3(realres,imgres);
        return c3;
    }
};
int main(){
    Complex c1(9,8);
    Complex c2(1,2);
    c1.show();
    c2.show();
    Complex c3=c1-c2;
    c3.show();
    return 0;
}



















