#include<iostream>
#include<cstring>
using namespace std;

void reverse(char word[],int n){
    int start=0,end=n-1;
    while (start<end){
        swap(word[start++],word[end--]);   //we could also write swap(word[start],word[end]);
    }                                      //                    start++;
}                                          //                    end--;
int main(){
    char word[]="Anmol";
    int len= strlen(word);
    reverse(word,len);
    cout<<word<<endl;
    return 0;
}