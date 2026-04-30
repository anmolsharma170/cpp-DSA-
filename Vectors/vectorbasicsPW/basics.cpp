// #include<iostream>
// #include<vector>    
// using namespace std;
// int main(){
//     vector<int> v; 
//     v.push_back(1);
//     v.push_back(2);
//     v.push_back(6);
//     v.push_back(5);
//     v.push_back(9);
//     v.push_back(6);
//     v.push_back(5);
//     v.push_back(6);
//     v.push_back(5);
//     v.push_back(6);
//     v.push_back(5);
//     v.push_back(6);
//     v.push_back(5);
//     v.push_back(6);
//     v.push_back(5);
//     v.push_back(6);
//     v.push_back(5);
//     v.push_back(6);
//     v.push_back(5);
//     cout<<v.size()<<endl;
//     cout<<v.capacity();                //once capacity is set it cannot be decreased even after poping the elements
//     v.pop_back();
//     v.pop_back();
//     v.pop_back();
//     v.pop_back();
//     v.pop_back();
//     v.pop_back();
//     v.pop_back();
//     v.pop_back();
//     v.pop_back();
//     v.pop_back();
//     cout<<endl<<v.size()<<endl;
//     cout<<v.capacity();
//     return 0;
// }


//vector with size
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int> v(5);      // by this automatically an array is generated whose value are initialised with zero
//     cout<<v.size()<<endl;
//     cout<<v.capacity()<<endl;
//     for(int i=0;i<v.size();i++){
//         cout<<v[i]<<" ";
//     }
//     cout<<endl;
//     vector<int> vec(5,7);
//     for(int i=0;i<v.size();i++){
//         cout<<vec[i]<<" ";
//     }
//     return 0;
// }

// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int> v;
//     v.push_back(1);
//     v.push_back(2);
//     v.push_back(8);
//     v.push_back(5);
//     v.push_back(1);
//     v.at(1)=100;
//     cout<<v.at(1);  //at will give element present at second index of vector v
//     return 0;
// }


// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// int main(){
//     vector<int> v;
//     v.push_back(9);
//     v.push_back(10);
//     v.push_back(5);
//     v.push_back(6);
//     sort(v.begin(),v.end());
//     for(int i=0;i<v.size();i++){
//         cout<<v[i]<<" ";
//     }
//     return 0;
// }


// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     int x=1;
//     int pos=-1;
//     vector<int> v={1,3,2,4,3,4,1,6};
//     for(int i=0;i<v.size();i++){
//         cout<<v[i]<<" ";
//     }
//     for(int i=0;i<v.size();i++){
//         if(v[i]==x){
//             pos=i;
//         }
//     }
//     cout<<"\nLast occurance of "<<x<<" is at index: "<<pos;
//     return 0;
// }






















































