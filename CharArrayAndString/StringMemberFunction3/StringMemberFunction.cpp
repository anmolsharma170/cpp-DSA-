/*
str.length()
str.at(index)
str.substr(start index,length/size)
str.find(word)
*/


// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     string str="Anmol Sharma";
//     cout<<str.length()<<endl;
//     return 0;
// }

// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     string str="Anmol Sharma";
//     cout<<str[2]<<endl;
//     cout<<str.at(2)<<endl;
//     return 0;
// }




// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     string str="Anmol Sharma";
//     cout<<str.substr(1,4)<<endl;
//     return 0;
// }




#include<iostream>
#include<string>
using namespace std;
int main(){
    string str="Anmol Sharma arm";
    cout<<str.find("arm")<<endl;
    cout<<str.find("arm",12)<<endl;  //2nd arm occurence index
    return 0;
}

















