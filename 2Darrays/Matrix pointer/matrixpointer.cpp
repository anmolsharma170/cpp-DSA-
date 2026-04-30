// #include<iostream>
// using namespace std;
// int main(){
//     int mat[4][4]= {{1,2,3,4},
//                     {5,6,7,8},
//                     {9,10,11,12},
//                     {13,14,15,16}};
//     cout<<mat<<" = "<<&mat[0][0]<<endl;
//     cout<<mat+1<<" != "<<&mat[0][1]<<endl;
//     cout<<mat+1<<" = "<<&mat[1][0]<<endl;
//     return 0;
// }


// #include<iostream>
// using namespace std;
// void func(int mat[][4],int n,int m){
//     cout<<"0th row pointer "<<mat<<endl;
//     cout<<"1st row pointer "<<mat+1<<endl;
//     cout<<"2nd row pointer "<<mat+2<<endl;
//     cout<<"3rd row pointer "<<mat+3<<endl;
//     cout<<endl;
//     cout<<"Niche pureh row ka value print hai address ki form mai"<<endl;
//     cout<<"0th row value "<<*mat<<endl;
//     cout<<"1st row value "<<*(mat+1)<<endl;
//     cout<<"2nd row value "<<*(mat+2)<<endl;
//     cout<<"3rd row value "<<*(mat+3)<<endl;
// }
// // both func1 and func2 do same task
// void func2(int (*mat)[4]){

// }
// int main(){
//     int mat[4][4]= {{1,2,3,4},
//                     {5,6,7,8},
//                     {9,10,11,12},
//                     {13,14,15,16}};
//     func(mat,4,4);
//     return 0;
// }



// Matrix ke name say agar hume i,j ki value dee ho toh hum individual element bhi nikal sakte hai
// ptr[i][j]=*(*(ptr+i)+j)

// humeh row ki value toh nikalne aati he hai
// agar hume row ki mai column add kr ke dereference kr de toh fir individual element aa jaye ga

#include<iostream>
using namespace std;
void func(int mat[][4],int n,int m){
    cout<<*(*(mat+1)+2);
}
// both func1 and func2 do same task
void func2(int (*mat)[4]){

}
int main(){
    int mat[4][4]= {{1,2,3,4},
                    {5,6,7,8},
                    {9,10,11,12},
                    {13,14,15,16}};
    func(mat,4,4);
    return 0;
}


















