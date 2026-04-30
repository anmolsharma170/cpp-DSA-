#include<iostream>
using namespace std;
void generateparenthesis(string s,int o,int c,int n){
    if(c==n){
        cout<<s<<endl;
        return;
    }
    
    if(o<n) generateparenthesis(s+"(",o+1,c,n);
    if(c<o) generateparenthesis(s+")",o,c+1,n);
}
int main(){
    int n = 3;
    generateparenthesis("",0,0,n);
    return  0;
}