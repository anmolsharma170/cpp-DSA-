// #include<iostream>
// using namespace std;

// class Ex{
// public:
//     Ex(){
//         cout<<"Constructor\n";
//     }
//     ~Ex(){
//         cout<<"Destructor\n";
//     }
// };
// int main(){
//     int a=0;
//     if(a==0){
//         Ex eg1;
//         }
//     cout<<"Code ended\n";
//     return 0;
// }






#include<iostream>
using namespace std;

class Ex{
public:
    Ex(){
        cout<<"Constructor\n";
    }
    ~Ex(){
        cout<<"Destructor\n";
    }
};
int main(){
    int a=0;
    if(a==0){
        static Ex eg1;
        }
    cout<<"Code ended\n";
    return 0;
}