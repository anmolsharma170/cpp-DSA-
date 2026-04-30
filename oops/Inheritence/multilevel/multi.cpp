// Single level

#include<iostream>
#include<string>
using namespace std;

class Animal{
public:
    string color;
    void eat(){
        cout<<"eats\n";
    }
    void breathe(){
        cout<<"breathes\n";
    }
};

class mammals: public Animal{
public:
    string bloodtype;
    mammals(){
        bloodtype="warm";
    }
};

class dog: public mammals{
public:
    void tailwig(){
        cout<<"A dog wigs its tail\n";
    }
};
int main(){
    dog d1;
    d1.eat();
    cout<<d1.bloodtype<<endl;
    d1.tailwig();
    return 0;
}