// #include<iostream>
// using namespace std;

// void printA(){
    // for(int i=0;i<5;i++){
    //     for(int j=0;j<5;j++){
    //         if(i==0 || i==2 || j==0 || j==4){
    //             cout<<"*";
    //         }
    //         else{
    //             cout<<" ";
    //         }
    //     }
    //     cout<<endl;
    // }
// #include <iostream>
// using namespace std;

// void printA(){
//     int height = 7; // Adjusting height for a better 'A' shape
//     int width = (height / 2) + (height % 2); // Width calculation for a balanced 'A'
    
//     for(int i = 0; i < height; i++) {
//         for(int j = 0; j < 2 * width - 1; j++) {
//             // Print '*' at the edges and create the horizontal line in the middle
//             if(j == width - i - 1 || j == width + i - 1 || (i == height / 2 && j > width - i - 1 && j < width + i - 1)) {
//                 cout << "*";
//             } else {
//                 cout << " ";
//             }
//         }
//         cout << endl;
//     }
// }

// int main() {
//     printA();
//     cout << endl;
//     return 0;
// }


// int main(){
//     printA();
//     cout<<endl;
// }