// #include<iostream>
// #include<string>
// using namespace std;

// class Car{
//     public:
//         string name;
//         string color;
//     Car(string name,string color){
//         this->name=name;
//         this->color=color;
//     }
// };
// int main(){
//     Car c1("Maruthi 800","White");
//     Car c2(c1);                             //Copy constructor made default
//     cout<<c2.name<<" , "<<c2.color<<endl;
//     return 0;
// }






// #include<iostream>
// #include<string>
// using namespace std;

// class Car{
//     public:
//         string name;
//         string color;
//     Car(string name,string color){
//         this->name=name;
//         this->color=color;
//     }
//     Car(Car &original){                          //Custom made copy constructor
//         cout<<"Copying original to new.\n";
//         name=original.name;
//         color=original.color;
//     }
// };
// int main(){
//     Car c1("Maruthi 800","White");
//     Car c2(c1);                             
//     cout<<c2.name<<" , "<<c2.color<<endl;
//     return 0;
// }


















