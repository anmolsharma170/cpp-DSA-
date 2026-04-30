#include<iostream>
#include<cstring>
void toUpper(char arr[],int n){
    for(int i=0;i<n;i++){
        char word=arr[i];
        if(word>='A' && word<='Z'){
            continue;
        }
        else{
            arr[i]=word-'a'+'A';
        }
    }
}
using namespace std;
int main(){
    char word[]="abcde";
    int len=strlen(word);
    toUpper(word,len);
    cout<<word<<endl;
    return 0;
}