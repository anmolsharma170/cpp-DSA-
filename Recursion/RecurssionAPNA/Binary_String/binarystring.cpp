#include<iostream>
#include<string>
using namespace std;
    void binarystring(int n,string ans,int lastplace){
        if(n==0){
            cout<<ans<<endl;
            return;
        }
        if(lastplace!=1){
            binarystring(n-1,ans+'0',0);
            binarystring(n-1,ans+'1',1);
        }
        else{
            binarystring(n-1,ans+'0',0);
        }
    }
int main(){
    string ans="";
    binarystring(3,ans,0);
    return 0;
}