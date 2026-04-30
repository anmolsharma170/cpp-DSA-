#include<iostream>
#include<string>
using namespace std;

void printsubstr(string str,string substr){
    if(str.size()==0){
        cout<<substr<<endl;
        return;
    }
    char ch=str[0];
    printsubstr(str.substr(1,str.size()-1),substr+ch);
    printsubstr(str.substr(1,str.size()-1),substr);
}
int main(){
    string str="abc";
    string substr="";
    printsubstr(str,substr);
    return 0;
}