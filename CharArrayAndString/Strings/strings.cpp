// strings use krne k liye we use string header file

// strings are basically class in c++

// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     string str="Anmol Sharma";
//     cout<<str<<endl;
//     str="Mr Anmol Sharma";
//     cout<<str<<endl;
//     return 0;
// }

// Strings as input

// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     string str;
//     cin>>str;  //try input "Anmol Sharma"
//     cout<<str;
//     return 0;
// }

// To solve the above issue

#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    getline(cin,str,'*');  //try "hi*hello"
    cout<<str;
    return 0;
}

















