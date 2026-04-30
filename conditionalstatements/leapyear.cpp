#include<iostream>
using namespace std;
int main(){
    int year;
    cout<<"Enter year: ";
    cin>>year;
    if((year%4==0 && year%100!=0)|| (year%400==0)){
        printf("Leap year");
    }
    else{
        printf("Not a leap year");
    }
    return 0;
}