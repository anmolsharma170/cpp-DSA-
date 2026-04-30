// Question 1 : Count how many times lowercase vowels occurred in a String entered
// by the user.

// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     string str="Anmol Sharma";
//     int count=0;
//     for(char ch: str){
//         if(ch=='a' || ch =='e' || ch=='i' || ch=='o' || ch=='u'){
//             count++;
//         }
//     }
//     cout<<"lowercase vowels in the string are: "<<count<<endl;
//     return 0;
// }



// Question 2 : You are given two strings s1 and s2 of equal length. A string swap is an
// operation where you choose two indices in a string (not necessarily different) and
// swap the characters at these indices.
// Return true if it is possible to make both strings equal by performing at most one
// string swap on exactly one of the strings. Otherwise, return false.
// Example :
// Input: s1 = "bank", s2 = "kanb"
// Output: true
// Explanation: For example, swap the first character with the last character of s2 to
// make "bank".



// bool areAlmostEqual(string s1, string s2) {
//     if (s1.length() != s2.length()) { // Check if the lengths of the two strings are different
//         return false; // If they are different, return false immediately
//     }

//     char diffChar1, diffChar2; // Variables to store the characters that differ
//     int diff = 0; // Counter for the number of differing character positions

//     for (int i = 0; i < s1.length(); i++) { // Loop through each character in the strings
//         if (s1[i] != s2[i]) { // Check if the characters at position i in s1 and s2 are different
//             if (!diff) { // If this is the first difference found
//                 diffChar1 = s1[i]; // Store the differing character from s1
//                 diffChar2 = s2[i]; // Store the differing character from s2
//             } else { // If this is not the first difference found
//                 if (s1[i] != diffChar2 || s2[i] != diffChar1) { // Check if the current differing characters match the first pair stored
//                     return false; // If they don't match, return false immediately
//                 }
//             }
//             diff++; // Increment the difference counter
//         }
//     }

//     if (diff > 2) { // If more than 2 characters differ
//         return false; // Return false, as more than one swap is needed
//     }

//     if (diff == 1) { // If exactly one character differs
//         return false; // Return false, as one character can't be swapped to match
//     }

//     return true; // If there are exactly 2 or 0 differences, the strings can be made equal
// }



#include<iostream>
#include<string>
using namespace std;

bool almostEqual(string str1,string str2){
    if(str1.length()!=str2.length()){
        cout<<"length not equal"<<endl;
        return false;
    }
    char diffchar1,diffchar2;
    int diff=0;
    for(int i=0;i<str1.length();i++){
        if(str1[i]!=str2[i]){
            if(!diff){
                diffchar1=str1[i];
                diffchar2=str2[i];
            }
            else{
                if(str1[i]!=diffchar2 || str2[i]!=diffchar1){
                    cout<<"Not same characters"<<endl;
                    return false;
                }
            }
        diff++;
        }   
    }
    if(diff>2){
        cout<<"diff 2"<<endl;
        return false;
    }
    if(diff==1){
        cout<<"diff 1"<<endl;
        return false;
    }
    return true;
}
int main(){
    string str1="bank";
    string str2="kanb";
    cout<<almostEqual(str1,str2);
    return 0;
}





































