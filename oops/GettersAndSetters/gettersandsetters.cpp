#include<iostream>
#include<string>
using namespace std;

class Student{
    string name;
    float cgpa;
public:
    void percentage(){
        cout<<(cgpa*10)<<"%\n";
    }

    // setters
    void setname(string nameval){
        name=nameval;
    }
    void setcgpa(float cgpaval){
        cgpa=cgpaval;
    }

    // getters
    string getname(){
        return name;
    }
    float getcgpa(){
        return cgpa;
    }
};

int main(){
    Student s1;
    s1.setname("Anmol");
    s1.setcgpa(9.5);
    cout<<s1.getname()<<endl;
    cout<<s1.getcgpa()<<endl;
    return 0;
}