// #include<iostream>
// using namespace std;
// int sum(int a,int b){
//     cout<<"Sum: "<<a+b<<"\n";
// }
// int diff(int a,int b){
//     cout<<"difference: "<<a-b<<"\n";
// }
// int main(){
//     sum(9,10);
//     diff(10,9);
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int sum(int a,int b){   //int a,int b parameters
//     int sum=a+b;
//     return sum;
// }
// int main(){
//     int x=sum(7,8);   //7,8 are arguements
//     cout<<"sum: "<<x<<endl;
//     return 0;
// }


//DEFAULT parameters
// #include<iostream>
// using namespace std;
// int sum(int a,int b=1){
//     int sum=a+b;
//     return sum;
// }
// int main(){
//     int a=sum(12);   //yaha pr humne sirf eak he arguement diya aur parameter pehle se he set kr diya to 1 toh bhi code ke jaye ga 
//     cout<<"Sum: "<<a; // pehle arguement hmesha first parameter ko he milta hai
//     return 0;        //agar hum parameter wale a ko value bhi de de aur sum ke call mai b eak he value pass kare toh bhi pehle wale a parameter ko he value assign hogi
// }


//wap to find product of 2 numbers
// #include<iostream>
// using namespace std;
// int prod(int a,int b){
//     int prod=a*b;
//     return prod;
// }
// int main(){
//     int x,y;
//     cout<<"Enter x: ";
//     cin>>x;
//     cout<<"Enter y: ";
//     cin>>y;
//     int ans=prod(x,y);
//     cout<<"Product is: "<<ans;
//     return 0;
// }

//wap to find if a number is odd or even
#include<iostream>
using namespace std;
void evenodd(int a){
    if(a%2==0){
        cout<<"No. is even\n";
    }
    else{
        cout<<"No. is odd\n";
    }
}
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    evenodd(n);
    return 0;
}





































