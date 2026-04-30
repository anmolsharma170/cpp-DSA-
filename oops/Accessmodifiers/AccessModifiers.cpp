

// THIS CODE WILL NOT WORK BECAUSE IMPLICITLY DECLARED PRIVATE
// default private


// #include<iostream>
// using namespace std;

// class Student{
//     string name;
//     float cgpa;

//     // methods
//     void percentage(){
//         cout<<(cgpa*10)<<"%\n";
//     }
// };
// int main(){
//     Student s1;
//     s1.name="Anmol Sharma";
//     cout<<s1.name<<endl;
//     return 0;
// }



// #include<iostream>
// using namespace std;

// class Student{
// public:
//     string name;
//     float cgpa;

//     // methods
//     void percentage(){
//         cout<<(cgpa*10)<<"%\n";
//     }
// };
// int main(){
//     Student s1;
//     s1.name="Anmol Sharma";
//     cout<<s1.name<<endl;
//     return 0;
// }







#include<iostream>
using namespace std;

class Student{
private:
    string name;
public:
    float cgpa;

    // methods
    void percentage(){
        cout<<(cgpa*10)<<"%\n";
    }
};
int main(){
    Student s1;
    // s1.name="Anmol Sharma";
    // cout<<s1.name<<endl;
    s1.cgpa=9;
    s1.percentage();
    return 0;
}
