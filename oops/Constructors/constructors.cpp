// #include<iostream>
// #include<string>
// using namespace std;

// class Car{
//     string name;
//     string color;
// public:
//     Car(){
//         cout<<"Constructor is called, object is created.\n";
//     }
// };
// int main(){
//     Car c1;
//     return 0;
// }


// Constructor for initialisation

// #include<iostream>
// #include<string>
// using namespace std;

// class Car{
//     string name;
//     string color;
// public:
//     Car(string namevalue,string colorvalue){
//         cout<<"Constructor is called, object is created.\n";
//         name=namevalue;
//         color=colorvalue;
//     }
//     string getname(){
//         return name;
//     }
// };
// int main(){
//     Car c1("Maruthi 800","White");
//     cout<<"Car name: "<<c1.getname();
//     return 0;
// }






// #include<iostream>
// #include<string>
// using namespace std;

// class Car{
//     string name;
//     string color;
// public:
//     Car(string name,string color){
//         cout<<"Constructor is called, object is created.\n";
//         this->name=name;
//         this->color=color;
//     }
//     string getname(){
//         return name;
//     }
// };
// int main(){
//     Car c1("Maruthi 800","White");
//     cout<<"Car name: "<<c1.getname();
//     return 0;
// }




// #include<iostream>
// #include<string>
// using namespace std;

// class Car{
//     string name;
//     string color;
// public:
//     Car(){
//         cout<<"Constructor without parameter.\n";
//     }
//     Car(string name,string color){
//         cout<<"Constructor with parameter.\n";
//         this->name=name;
//         this->color=color;
//     }
//     string getname(){
//         return name;
//     }
// };
// int main(){
//     Car c0;
//     Car c1("Maruthi 800","White");
//     cout<<"Car name: "<<c1.getname();
//     return 0;
// }






#include<iostream>
#include<string>
using namespace std;

class User{
    int id;
    string password;
public:
    string username;
    User(int id){
        this->id=id;
    }

    string getpassword(){
        return password;
    }

    void setpassword(string password){
        this->password=password;
    }
};

int main(){
    User u1(101);
    u1.username="Anmol";
    u1.setpassword("abcd");

    cout<<"Username: "<<u1.username<<endl;
    cout<<"User password: "<<u1.getpassword()<<endl;
    return 0;
}
















