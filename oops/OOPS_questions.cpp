// #include<iostream>
// #include<string>
// using namespace std;

// class Complex{
//     int real, imaginary;
// public:
//     Complex(int r,int i){
//         real=r;
//         imaginary=i;
//     }

//     void show(){
//         cout<<real<<"+"<<imaginary<<"i\n";
//     }

//     Complex operator -(Complex &c2){
//         int realres=this->real-c2.real;
//         int imgres=this->imaginary-c2.imaginary;
//         Complex c3(realres,imgres);
//         return c3;
//     }
// };
// int main(){
//     Complex c1(9,8);
//     Complex c2(1,2);
//     c1.show();
//     c2.show();
//     Complex c3=c1-c2;
//     c3.show();
//     return 0;
// }





// #include<iostream>
// #include<string>
// using namespace std;

// class BankAccount{
//     int accountnum,balance;
// public:
//     BankAccount(int acnum,int bal){
//         accountnum=acnum;
//         balance=bal;
//     }
//     int deopsit(int n){
//         cout<<"deposited :"<<n;
//         balance+=n;
//         // cout<<"balance: "<<balance<<endl;
//     }
//     int withdrow(int n){
//         if(n<=balance){
//         cout<<"\nwithdrown: "<<n;
//         balance-=n;
//         }
//         else{
//             cout<<"\nNot sufficient money in the acc";
//         }
//         // cout<<"balance: "<<balance<<endl;
//     }
//     int getbalance(){
//         cout<<"\nbalance: "<<balance;
//     }
// };
// int main(){
//     BankAccount c1(1234,1000);
//     c1.getbalance();
//     c1.withdrow(1100);
//     c1.getbalance();
//     return 0;
// }





#include<iostream>
#include<string>
using namespace std;

class Person{
protected:
    string name;
    int age;
public:
    Person(string n,int a){
        name=n;
        age=a;
    }
};
class Student:public Person{
    int stuID;
public:
    Student(string n,int a,int id):Person(n,a){
        stuID=id;
    }

    void display(){
        cout<<"Name: "<<this->name<<endl;
        cout<<"age: "<<this->age<<endl;
        cout<<"studentID: "<<this->stuID<<endl;
    }
};
int main(){
    Student student("Alice",20,12315400);
    student.display();
    return 0;
}

























