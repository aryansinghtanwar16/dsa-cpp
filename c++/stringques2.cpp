/*
Given two strings s and t, return true if t is an anagram of s, and false otherwise
Constraints: String s and t will only contain lowercase alphabetical characters 


Input1:s="anagram",t="nagaram"
output1: Yes 

Input2: s="bank", t="atm"
output2: No
*/

#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

bool anagram(string s, string t){
    if(s.length()!=t.length()){
        return false;
    }
    // sort both arrays 
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    if (s==t){
        return true;
    }
    else {
        return false;
    }


}


int main(){

    string s, t;
    cin>>s>>t;


    cout<<anagram(s,t)<<endl;

    return 0;
}