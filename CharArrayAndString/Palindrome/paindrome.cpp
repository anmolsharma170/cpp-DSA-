#include<iostream>
#include<cstring>
using namespace std;

bool isPalin(char arr[],int n){
    int start=0,end=n-1;
    // for(int i=0;i<n;i++){                         
    //     if(arr[start++]!=arr[end--]){
    //         cout<<"Not a palindrome"<<endl;
    //         return false;
    //     }
    // }
    while(start<end){                         
        if(arr[start++]!=arr[end--]){
            cout<<"Not a palindrome"<<endl;
            return false;
        }
    }
    cout<<"Valid palindrome";
    return true;
}
int main(){
    char word[]="racecar";
    isPalin(word,strlen(word));
    return 0;
}