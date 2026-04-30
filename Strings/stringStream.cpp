#include<iostream>
#include<string>
#include<sstream>
using namespace std;
int main(){
    string str = "He is a good boy";
    stringstream ss(str);
    string temp;
    while(ss>>temp){
        cout<<temp<<endl;
    }
    return 0;
}
