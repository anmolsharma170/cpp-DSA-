#include<iostream>
using namespace std;

class user{
    // properties
    string username;
    string password;
    string bio;

    // Methods/functions/member function
    void deactivate(){
        cout<<"Deleting account\n";
    }
    void changebio(string newbio){
        bio=newbio;
    }

};