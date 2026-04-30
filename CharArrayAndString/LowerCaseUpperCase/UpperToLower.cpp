#include<iostream>
#include<cstring>
using namespace std;
void toLower(char arr[],int n){
    for(int i=0;i<n;i++){
        char alpha=arr[i];
        if(alpha>='a' && alpha <='z'){
            continue;
        }
        else{
            arr[i]=alpha-'A'+'a';
        }
    }
}
int main(){
    char arr[]="ABCdE";
    int len= strlen(arr);
    toLower(arr,len);
    cout<<arr<<endl;
    return 0;
}