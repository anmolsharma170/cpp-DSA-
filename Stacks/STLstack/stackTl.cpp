// #include<iostream>
// #include<stack>
// using namespace std;
// int main(){
//     stack<int> st;
//     cout<<st.size()<<endl;
//     st.push(10);
//     st.push(20);
//     st.push(30);
//     st.push(40);
//     st.push(50);
//     cout<<st.size()<<endl;
//     st.pop();
//     cout<<st.size()<<endl;
//     return 0;
// }





// #include<iostream>                        //this will empty the stack and we will loose elements of stack 
// #include<stack>         
// using namespace std;                          //output is in reverse order
// int main(){
//     stack<int> st;
//     st.push(10);
//     st.push(20);
//     st.push(30);
//     st.push(40);
//     st.push(50);
//     while(st.size()>0){
//         cout<<st.top()<<" ";
//         st.pop();
//     }
//     return 0;
// }






#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> st;
    cout<<st.size()<<endl;
    st.push(1);
    st.push(2);
    st.push(3);
    cout<<st.size()<<endl;
    st.push(4);
    cout<<st.size()<<endl;
    st.pop();
    cout<<st.size()<<endl;
    return 0;
}



















































