// #include<iostream>
// using namespace std;
// void hanoi(int n,char a ,char b,char c){
//     if(n==0) return;
//     hanoi(n-1,a,c,b);
//     cout<<a<<" -> "<<c<<endl;
//     hanoi(n-1,b,a,c);
// }
// int main(){
//     int n = 3;
//     hanoi(n,'A','B','C');
//     return 0;
// }


#include<iostream>
using namespace std;

void hanoi(int n,string s,string h,string d){
    if(n==0) return;
    hanoi(n-1,s,d,h);
    cout<<s<<" -> "<<d<<endl;
    hanoi(n-1,h,s,d);
}
int main(){
    int n = 3;
    hanoi(n,"s","h","d");
    return 0;
}





























