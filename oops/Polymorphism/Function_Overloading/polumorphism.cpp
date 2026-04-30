#include<iostream>
#include<string>
using namespace std;

class Car{
public:
    void show(int a){
        cout<<"int : "<<a<<endl;
    }
    void show(string s){
        cout<<"string : "<<s<<endl;
    }
};
int main(){
    Car c1;
    c1.show(12);
    c1.show("Anmol");
    return 0;
}