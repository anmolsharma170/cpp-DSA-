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
    int fins;
    void fish(){
        cout<<"swims\n";
    }
};
int main(){
    mammals m1;
    m1.fins=12;
    cout<<m1.fins<<endl;
    m1.eat();
    m1.breathe();
    return 0;
}