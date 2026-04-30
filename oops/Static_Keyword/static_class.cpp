// #include<iostream>
// using namespace std;

// class Ex{
// public:
//     int x=0;
// };
// int main(){
//     Ex eg1;
//     Ex eg2;
//     cout<<eg1.x++<<endl;
//     cout<<eg2.x++<<endl;
//     return 0;
// }







#include<iostream>
using namespace std;

class Ex{
public:
    static int x;
};
int Ex::x=0;
int main(){
    Ex eg1;
    Ex eg2;
    Ex eg3;
    cout<<eg1.x++<<endl;
    cout<<eg2.x++<<endl;
    cout<<eg3.x++<<endl;
    return 0;
}