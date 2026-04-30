#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s = "anmol";
    string str = "lomna";
    sort(s.begin(),s.end());
    sort(str.begin(),str.end());
    if(s==str){
        cout<<"valid";
    }
    else{
        cout<<"not valid";
    }
    return 0;
}