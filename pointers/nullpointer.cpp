//we assign null value to a pointer to shpw that it does not point to any location
//dereferencing null ptr is not possible as it will result in error


#include<iostream>
using namespace std;
int main(){
    int *ptr=NULL;
    cout<<ptr<<"\n";   // here the address will be zero
    // cout<<*ptr<<"\n" //this line will throw error(segmentation fault)
    
    return 0;
}