#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    int c=num;
    int totdig=0;
    int sum=0;
    while(num!=0){
        int last=num%10;
        sum=sum+last*last*last;
        num=num/10;
        
    }
    if(c==sum){
        printf("Armstrong number");
    }
    else{
        printf("Not a armstrong number");
    }
    return 0;
}