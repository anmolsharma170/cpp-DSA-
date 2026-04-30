#include<iostream>
using namespace std;

// abstract class
class Shape{
    virtual void draw()=0;   //   virtual fxn/ abstract fxn
};

// derived class
class Circle:public Shape{
public:
    void draw(){
        cout<<"Drow Circle\n";
    }
};
class Square:public Shape{
public:
    void draw(){
        cout<<"Drow Square\n";
    }
};
int main(){
    Circle c1;
    c1.draw();
    Square s1;
    s1.draw();
    return 0;
}