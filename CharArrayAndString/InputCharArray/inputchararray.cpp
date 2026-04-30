

// #include<iostream>
// using namespace std;
// int main(){
//     char arr[30];
//     cin>>arr;                               //cin works for single words not for sentences after it sees whitespace it ignores rest things
//     cout<<"your char array is: "<<arr<<endl;
//     return 0;
// }

// because cin ignores rest things when sees whitespace while taking input so therefore we use cin.getline

// #include<iostream>
// using namespace std;
// int main(){
//     char arr[30];
//     cin.getline(arr,30);
//     cout<<"your char array is: "<<arr<<endl;
//     return 0;
// }

// we also have a delimiter when we use cin.getline() for eg we have Anmol *Sharma and we want that once * appears we dont want anything next
// there we use delimiter


#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char arr[30];
    cin.getline(arr,30,'&');
    cout<<"your char array is: "<<arr<<endl;
    cout<<"len is: "<<strlen(arr)<<endl;
    return 0;
}







