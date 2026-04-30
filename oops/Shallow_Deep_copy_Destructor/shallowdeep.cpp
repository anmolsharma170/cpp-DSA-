
// Shallow copy

// #include<iostream>
// #include<string>
// using namespace std;

// class Car{
//     public:
//         string name;
//         string color;
//         int *mileage;
//         Car(string name,string color){
//             this->name=name;
//             this->color=color;
//             mileage=new int;
//             *mileage=12;
//         }
//         Car(Car &original){
//             name=original.name;
//             color=original.color;
//             mileage=original.mileage;
//         }
// };
// int main(){
//     Car c1("Maruthi 800","Blue");
//     Car c2(c1);
//     cout<<c1.name<<endl;
//     cout<<*c1.mileage<<endl;
//     *c2.mileage=16;
//     cout<<*c1.mileage<<endl;
//     return 0;
// }


// Deep copy



// #include<iostream>
// #include<string>
// using namespace std;

// class Car{
//     public:
//         string name;
//         string color;
//         int *mileage;
//         Car(string name,string color){
//             this->name=name;
//             this->color=color;
//             mileage=new int;
//             *mileage=12;
//         }
//         Car(Car &original){
//             name=original.name;
//             color=original.color;
//             mileage=new int;
//             *mileage=*original.mileage;
//         }
// };
// int main(){
//     Car c1("Maruthi 800","Blue");
//     Car c2(c1);
//     cout<<c1.name<<endl;
//     cout<<*c1.mileage<<endl;
//     *c2.mileage=16;
//     cout<<*c1.mileage<<endl;
//     cout<<*c2.mileage<<endl;
//     return 0;
// }




// Destructor



#include<iostream>
#include<string>
using namespace std;

class Car{
    public:
        string name;
        string color;
        int *mileage;
        Car(string name,string color){
            this->name=name;
            this->color=color;
            mileage=new int;
            *mileage=12;
        }
        Car(Car &original){
            name=original.name;
            color=original.color;
            mileage=new int;
            *mileage=*original.mileage;
        }
        ~Car(){
            if(mileage!=NULL){
                cout<<"deleting object...\n"<<endl; 
                delete mileage;
                mileage=NULL;
            }
        }
};
int main(){
    Car c1("Maruthi 800","Blue");
    cout<<c1.name<<endl;
    cout<<*c1.mileage<<endl;
    return 0;
}






