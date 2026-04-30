/* strcpy   
strcat    
strcmp

cstring hmare pass header file hoti hai jiske ander various predefined functions hote hai*/

// #include<iostream>
// #include<cstring>
// using namespace std;
// int main(){
//     char str[100];
//     str="apna college";       //this assignment is not allowed thus this code will give us error
//     return 0;
// }


// to overcome above error we use strcpy function
// #include<iostream>
// #include<cstring>
// using namespace std;
// int main(){
//     char str[100];
//     strcpy(str,"apna college");
//     cout<<str<<endl;
//     return 0;
// }



// #include<iostream>
// #include<cstring>
// using namespace std;
// int main(){
//     char str[100]="Anmol ";
//     char str1[100]="Sharma";
//     strcat(str,str1);
//     cout<<str<<endl;
//     cout<<str1<<endl;
//     return 0;
// }



#include<iostream>
#include<cstring>
using namespace std;
int main(){                         //if 1st one is bigger than second than it will give +ve random result else it will give -ve result
    char str[100]="Anmol "; 
    char str1[100]="xnmol";
    cout<<strcmp(str,str1);
    return 0;
}






















