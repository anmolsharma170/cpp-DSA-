// #include<iostream>
// #include<string>
// using namespace std;
// class A{
//     string secrete="Secrete data";     //Error inaccesable to private data
// };
// class B{
// public:
//     void showdata(A &obj){
//         cout<<obj.secrete<<endl;
// }
// };
// int main(){
//     A a1;
//     B b1;
//     b1.showdata(a1);
//     return 0;
// }



#include<iostream>
#include<string>
using namespace std;
class A{
    string secrete="secrete data\n";
    friend class B;
    friend void revealsecrete(A &obj);
};
class B{
    public:
    void showdata(A &obj){
        cout<<obj.secrete<<endl;
}
};
void revealsecrete(A &obj){
    cout<<obj.secrete<<endl;
}
int main(){
    A a1;
    B b1;
    b1.showdata(a1);
    return 0;
}



















