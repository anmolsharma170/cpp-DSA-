// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     string str="Anmol Sharma";
//     for(int i=0;i<str.length();i++){
//         cout<<str[i]<<"-";
//     }
//     cout<<endl;
//     return 0;
// }


//                                 OR


#include<iostream>
#include<string>
using namespace std;
int main(){
    string str="Anmol Sharma";
    for(char ch: str){
        cout<<ch<<"-";
    }
    cout<<"\n";
    return 0;
}




